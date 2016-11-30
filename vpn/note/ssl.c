#include <stdio.h>
#include <string.h>
#include <time.h>

#include <openssl/evp.h>
#include <openssl/sha.h>
#include <openssl/rsa.h>
#include <openssl/aes.h>
#include <openssl/pem.h>

void show_cipher(const EVP_CIPHER *cipher, const char *name, const char *data, void *arg)/*{{{*/
{
	if (cipher == NULL) {
		cipher = EVP_get_cipherbyname(name);
	}
	printf("%d\t", EVP_CIPHER_type(cipher));
	printf("%lx\t", EVP_CIPHER_mode(cipher));
	printf("%d\t", EVP_CIPHER_block_size(cipher));
	printf("%d\t", EVP_CIPHER_key_length(cipher));
	printf("%d\t", EVP_CIPHER_iv_length(cipher));
	printf("%s\t", EVP_CIPHER_name(cipher));
	printf("%s\t", name);
	printf("\n");

}
/*}}}*/
void show_md(const EVP_MD *md, const char *name, const char *data, void *arg)/*{{{*/
{
	if (md == NULL) {
		md = EVP_get_digestbyname(name);
	}
	printf("%d\t", EVP_MD_type(md));
	printf("%ld\t", EVP_MD_flags(md));
	printf("%d\t", EVP_MD_block_size(md));
	printf("%d\t", EVP_MD_size(md));
	printf("%s\t", EVP_MD_name(md));
	printf("%s\t", name);
	printf("\n");

}
/*}}}*/
void show()/*{{{*/
{
#if 0
	printf("type\t");
	printf("flags\t");
	printf("block_size\t");
	printf("size\t");
	printf("name\t");
	printf("alias\t");
	printf("\n");
	EVP_MD_do_all(show_md, NULL);
#endif

#if 0
	printf("type\t");
	printf("mode\t");
	printf("block_size\t");
	printf("key\t");
	printf("iv\t");
	printf("name\t");
	printf("alias\t");
	printf("\n");
	EVP_CIPHER_do_all(show_cipher, NULL);
#endif
}
/*}}}*/

unsigned char key_en[EVP_MAX_KEY_LENGTH*2];
unsigned char out_en[64];

void genkey()/*{{{*/
{
	unsigned char *uname = "1";
	unsigned char salt[PKCS5_SALT_LEN+1] = "12345678";
	const EVP_MD *md = EVP_get_digestbyname("md5");
	const EVP_CIPHER *cipher = EVP_get_cipherbyname("aes-192-ecb");

	unsigned char key[EVP_MAX_KEY_LENGTH+1];
	unsigned char iv[EVP_MAX_IV_LENGTH+1];
	memset(key, 0, EVP_MAX_KEY_LENGTH+1);
	memset(iv, 0, EVP_MAX_IV_LENGTH+1);
	EVP_BytesToKey(cipher, md, salt, uname, strlen(uname), 0, key, iv);

	unsigned char iv_en[EVP_MAX_IV_LENGTH*2];
	memset(key_en, 0, EVP_MAX_KEY_LENGTH*2);
	memset(iv_en, 0, EVP_MAX_IV_LENGTH*2);
	EVP_EncodeBlock(key_en, key, cipher->key_len);
	EVP_EncodeBlock(iv_en, iv, cipher->iv_len);

	printf("code(%ld): %s\n", strlen(uname), uname);
	printf("salt(%ld): %s\n", strlen(salt), salt);
	printf("digest: %s\n", EVP_MD_name(md));
	printf("cipher: %s\n", EVP_CIPHER_name(cipher));
	printf("key(%u): %s(%ld)\n", cipher->key_len, key_en, strlen(key_en));
	printf("iv(%u): %s(%ld)\n", cipher->iv_len, iv_en, strlen(iv_en));
	printf("\n\n");
}/*}}}*/
void send(const char *sessionid)/*{{{*/
{

	const EVP_CIPHER *cipher = EVP_get_cipherbyname("aes-192-ecb");

	int inl;
	unsigned char in[64];
	memset(in, 0, 64);
	snprintf(in, 64, "%ld %s %s", time(NULL)+60, sessionid, "100cb827");
	inl = strlen(in);

	if (inl % cipher->block_size != 0) {
		inl = inl / cipher->block_size * cipher->block_size + cipher->block_size;
	}

	unsigned char key[EVP_MAX_KEY_LENGTH+1];
	EVP_DecodeBlock(key, key_en, strlen(key_en));

	int outl;
	int total = 0;
	unsigned char out[64];
	memset(out, 0, 64);

	EVP_CIPHER_CTX ctx;
	EVP_CIPHER_CTX_init(&ctx);
	EVP_EncryptInit_ex(&ctx, cipher, NULL, key, NULL);
	EVP_EncryptUpdate(&ctx, out, &outl, in, inl);
	total += outl;
	EVP_CIPHER_CTX_cleanup(&ctx);

	memset(out_en, 0, 64);
	EVP_EncodeBlock(out_en, out, total);

	printf("%d: %s\n", inl, in);
	printf("%d: %s\n", total, out_en);
	printf("\n\n");

}/*}}}*/
void recv()/*{{{*/
{
	const EVP_CIPHER *cipher = EVP_get_cipherbyname("aes-192-ecb");

	int inl;
	unsigned char in[64];
	memset(in, 0, 64);

	cipher = EVP_get_cipherbyname("aes-192-ecb");
	unsigned char key[EVP_MAX_KEY_LENGTH+1];
	EVP_DecodeBlock(key, key_en, strlen(key_en));

	int outl;
	unsigned char out[64];
	memset(out, 0, 64);

	outl = EVP_DecodeBlock(out, out_en, strlen(out_en));


	int total = 0;
	EVP_CIPHER_CTX ctx;
	EVP_CIPHER_CTX_init(&ctx);
	EVP_DecryptInit_ex(&ctx, cipher, NULL, key, NULL);
	EVP_DecryptUpdate(&ctx, in, &inl, out, outl);
	total += inl;
	EVP_DecryptFinal(&ctx, in+total, &inl);
	total += inl;
	EVP_CIPHER_CTX_cleanup(&ctx);

	time_t t;
	unsigned char sessionid[20];
	unsigned char mapid[20];
	memset(sessionid, 0, 20);
	memset(mapid, 0, 20);

	sscanf(in, "%ld %s %s", &t, sessionid, mapid);
	printf("time: %ld\n", t);
	printf("sessionid: %s\n", sessionid);
	printf("mapid: %s\n", mapid);
}
/*}}}*/

int main(int argc, const char *argv[])
{
	OPENSSL_add_all_algorithms_conf();

	RSA *rsa = RSA_generate_key(1024, RSA_F4, NULL, NULL);
	PEM_write_RSAPrivateKey(stdout, rsa, NULL, NULL, 0, NULL, 0);

#if 0
	char *in = malloc(2048);
	char *out = malloc(2048);
	sprintf(in, "111111111111111\n");
	int inl = strlen(in);
	int outl = 16;
	char buf[2048] = "";

	AES_KEY key;
	AES_set_encrypt_key("123467890123456", 128, &key);
	AES_ecb_encrypt(in, out, &key, AES_ENCRYPT);
	EVP_EncodeBlock(buf, out, 16);

	printf("out(%d): %s\n", outl, buf);

	memset(in, 0, 2048);
	AES_set_decrypt_key("123467890123456", 128, &key);
	AES_ecb_encrypt(out, in, &key, AES_DECRYPT);
	printf("in(%d): %s\n", inl, in);
#endif

#if 0
	RSA *rsa = RSA_generate_key(1024, RSA_F4, NULL, NULL);
	//RSA_print_fp(stdout, rsa, 4);

	char *in = malloc(2048);
	char *out = malloc(2048);
	sprintf(in, "hello");
	int inl = strlen(in);
	int outl = 0;
	char buf[2048] = "";
#if 0
	RSA_sign(NID_rsa, in, inl, out, &outl, rsa);
	printf("%d", RSA_verify(NID_rsa, in, inl, out, outl, rsa));

	EVP_EncodeBlock(buf, out, outl);
	printf("in(%d): %s\n", inl, in);
	printf("out(%d): %s\n", outl, buf);

#endif

#if 0
	memset(out, 0, 2048);
	outl = RSA_public_encrypt(inl, in, out, rsa, RSA_PKCS1_PADDING);
	EVP_EncodeBlock(buf, out, outl);
	printf("out(%d): %s\n", outl, buf);

	memset(in, 0, 2048);
	inl = RSA_private_decrypt(outl, out, in, rsa, RSA_PKCS1_PADDING);
	printf("in(%d): %s\n", inl, in);
#endif
#endif 

#if 0
	char sha[SHA_DIGEST_LENGTH+1];
	memset(sha, 0, SHA_DIGEST_LENGTH+1);
	SHA("hello\n", 6, sha);
	printf(sha);
#endif

#if 0
	if (argc < 2) {
		printf("usage %s sessionid\n", argv[0]);
		return 1;
	}

	genkey();
	send(argv[1]);
	recv();
#endif


	return 0;
}

