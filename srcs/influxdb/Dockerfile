FROM alpine:3.12.0

RUN apk --update --no-cache add influxdb

RUN mkdir -p /etc/influxdb
COPY ./influxdb.conf /etc/influxdb/influxdb.conf

EXPOSE 8086

ENTRYPOINT ["/usr/sbin/influxd", "-config", "/etc/influxdb/influxdb.conf"]