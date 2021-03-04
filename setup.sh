#minikube set
minikube start --driver=virtualbox
eval $(minikube docker-env)

#metallb
minikube addons enable metallb
kubectl apply -f ./srcs/metallb/metallb.yaml

#nginx
cd ./srcs/nginx
echo "\033[32mnginx image build\033[0m"
docker build -t nginx:latest .
echo "\033[36mnginx deployment\033[0m"
kubectl apply -f ./nginx.yaml

#phpmyadmin
cd ../phpmyadmin
echo "\033[32mphpmyadmin image build\033[0m"
docker build -t phpmyadmin:latest .
echo "\033[36mphpmyadmin deployment\033[0m"
kubectl apply -f ./phpmyadmin.yaml

#mysql
cd ../mysql
echo "\033[32mmysql image build\033[0m"
docker build -t mysql:latest .
echo "\033[36mmysql deployment\033[0m"
kubectl apply -f mysql.yaml
