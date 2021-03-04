FROM alpine:3.12.0

RUN apk update \
	&& apk --update --no-cache add \
	nginx \
	openssl

COPY ./set.sh /usr/sbin/set.sh
RUN chmod 777 /usr/sbin/set.sh
COPY ./default.conf /etc/nginx/conf.d/

EXPOSE 80 443

ENTRYPOINT ["/usr/sbin/set.sh"]