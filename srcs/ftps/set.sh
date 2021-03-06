#!/bin/sh

mkdir -p /var/ftp
mkdir -p /etc/ssl/private
mkdir -p /etc/ssl/certs
mkdir -p /var/ftp/user

openssl req -x509 -nodes -days 365 -newkey rsa:2048 -subj "/C=KR/ST=Seoul/L=Seoul/O=42seoul/CN=localhost" -keyout /etc/ssl/private/vsftpd.key -out /etc/ssl/certs/vsftpd.crt

adduser -D user -h /var/ftp/user
chown user:user /var/ftp/user
echo "user:pass" | chpasswd

vsftpd /etc/vsftpd/vsftpd.conf