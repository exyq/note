# nginx config

* nginx配置文件位于 **/etc/nginx/nginx.conf**

## 配置内容解析

#### 配置文件头部
* user **默认运行用户**
* worker_processes **CPU数量设定**
* error_log **错误日志路径**
* pid **pid存放位置**
* worker_connections **并发数**

#### http{}
* include **文件拓展名映射表**
* default_type **文件类型**
* log_format main **设置日志格式**
* access_log **nginx服务端的访问日志路径**
* sendfile **高速传输模式*****默认开启***
* tcp_nopush **积攒数据包待一起发送*****默认关闭***
* keepalive_timeout **超时的时间**
* gzip **减少访问时间，对媒体进行压缩*****默认关闭***
* include **包含子配置文件路径**
