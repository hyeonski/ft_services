#!/bin/sh

tar -xvf wordpress.tar.gz
rm -rf wordpress.tar.gz
mv /wordpress/ /var/www/wordpress
chmod -R 755 /var/www/*
mkdir -p /run/nginx

sleep 10

mysql -hmysql -Dwordpress -uroot -ppass < /wordpress.sql

php-fpm7 & nginx -g "daemon off;"