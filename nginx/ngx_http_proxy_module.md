# ngx_http_proxy_module

### proxy_http_version
```
Syntax:   proxy_http_version 1.0 | 1.1;
Default:  proxy_http_version 1.0;
Context:  http, server, location
This directive appeared in version 1.1.4.
```
默认是用HTTP1.0连接下游服务，长连接变短链接。当使用keepalive或者NTLM认证时，推荐使用HTTP1.1。

### proxy_request_buffering
```
Syntax:	  proxy_request_buffering on | off;
Default:  proxy_request_buffering on;
Context:  http, server, location
This directive appeared in version 1.7.11.
```
是否缓存客户端请求。开启缓存时，首先将整个客户端请求完整读取，再进行转发；反之，如果未开启缓存，并且开始转发之后出错，则无法自动转发到下一个server。开启HTTP/1.1 chunked transfer encoding时，将始终对请求进行缓存。