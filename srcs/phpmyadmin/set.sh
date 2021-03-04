#!/bin/sh

tar -xvf /pma.tar.gz > /dev/null
rm -f /pma.tar.gz
mv /phpMyAdmin-4.9.5-all-languages /var/www/phpmyadmin

chmod 705 /var/www/phpmyadmin/config.inc.php
mkdir -p /run/nginx

php-fpm7 && nginx -g "daemon off;"