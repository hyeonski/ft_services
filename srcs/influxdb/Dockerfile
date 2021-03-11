FROM alpine:3.12.0

RUN apk --update --no-cache add influxdb

RUN mkdir -p /etc/influxdb
RUN mkdir -p /var/lib/influxdb
COPY ./influxdb.conf /etc/influxdb/influxdb.conf

COPY ./set.sh  /usr/sbin/set.sh
RUN chmod +x /usr/sbin/set.sh

EXPOSE 8086


ENTRYPOINT ["/usr/sbin/set.sh"]