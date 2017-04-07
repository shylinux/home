openssl genrsa -out key.pem 1024
openssl req -new -x509 -key key.pem -out cert.pem
