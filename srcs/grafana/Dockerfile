FROM alpine:3.12.0

RUN         apk --update --no-cache add grafana --repository http://dl-cdn.alpinelinux.org/alpine/edge/community/ --allow-untrusted

# COPY        /dashboards /usr/share/grafana/public/dashboards/

EXPOSE      3000

# ENTRYPOINT ["/usr/sbin/grafana-server", "--homepath=/usr/share/grafana"]
ENTRYPOINT ["sleep", "10000000000"]