# docker container
	
1 docker container run IMAGE---下载所需镜像并运行环境
2 docker container ls---显示正在运行的容器
* docker container ls -a---显示所有正在运行的以及运行过的镜像及容器
* docker container ls -q---只显示镜像的ID

3 docker container rm ID---删除容器
* docker container rm -f ID---强制删除已停止和正在运行的容器
* docker container rm -f $(docker container ls -aq)---可删除所有正在运行和停止的容器!!!

4 docker container stop ID---让容器停止运行
5 docker container run -p 80:80 IMAGE---让容器下载所需镜像并运行在80:80端口进行端口映射
6 docker container -d IMAGE---让容器在后在运行
7 docker container attach ID---让后台运行的容器转为前台
8 docker container logs ID---查看所选容器当时的日志
* docker container logs -f ID---实时查看所选容器的日志

9 docker container run -it IMAGE sh---建立所选镜像的容器并以shell形式与之交互
