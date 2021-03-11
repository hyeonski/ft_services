FROM alpine:3.12.0

RUN apk --update --no-cache add grafana --repository http://dl-cdn.alpinelinux.org/alpine/edge/community/ --allow-untrusted

COPY ./custom.ini /usr/share/grafana/conf/custom.ini
COPY ./datasources.yaml /usr/share/grafana/conf/provisioning/datasources/datasources.yaml
COPY ./dashboards.yaml /usr/share/grafana/conf/provisioning/dashboards/dashboards.yaml

COPY /dashboards /usr/share/grafana/public/dashboards/

EXPOSE 3000

ENTRYPOINT ["/usr/sbin/grafana-server", "--homepath=/usr/share/grafana"]