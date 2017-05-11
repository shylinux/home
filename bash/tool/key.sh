#!/bin/bash

openssl genrsa -out cert.key 1024
openssl req -new -x509 -key cert.key -out cert.pem -config key.conf

