## Git服务器搭建
- 在服务器端创建用户组与用户
```sh
sudo useradd -m -g git git
sudo visudo
sudo chown git:git /home/git
```
- 在git家目录下导入ssh公钥
```sh
ssh-keygen -t rsa
cat ~/.ssh/id_rsa.pub > ~/.ssh/authorized_keys
```
- 在git家目录下创建仓库
```sh
cd /home/git
mkdir <RepositoryName>.git
cd <RepositoryName>.git
git init .
```
- Git服务器搭建完成
- 在客户端进行clone
```sh
git clone git@<域名>:<RepositoryName>.git
```
