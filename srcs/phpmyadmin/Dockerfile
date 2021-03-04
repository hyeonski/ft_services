FROM alpine:3.12.0


RUN apk add --no-cache nginx php7 php7-fpm php7-mbstring php7-session php7-common \
	php7-iconv php7-json php7-gd php7-curl php7-xml php7-mysqli php7-imap \
	php7-cgi fcgi php7-pdo php7-pdo_mysql php7-soap php7-xmlrpc php7-posix \
	php7-mcrypt php7-gettext php7-ldap php7-ctype php7-dom

COPY /pma.tar.gz /
COPY /default.conf /etc/nginx/conf.d/
COPY /set.sh /usr/sbin/set.sh
RUN chmod 777 /usr/sbin/set.sh

EXPOSE 5000

ENTRYPOINT [ "/usr/sbin/set.sh" ]