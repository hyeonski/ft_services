FROM alpine:3.12.0

RUN apk update \
		&& apk --update --no-cache add \
			mysql mysql-client
			
COPY ./my.cnf /etc/my.cnf
RUN chmod 644 /etc/my.cnf

COPY ./cmd.sql /cmd.sql

COPY ./set.sh /usr/sbin/set.sh
RUN chmod 777 /usr/sbin/set.sh

EXPOSE 3306

ENTRYPOINT ["/usr/sbin/set.sh"]