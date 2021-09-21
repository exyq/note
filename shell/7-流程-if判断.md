##if判断语句

```shell
#语法一: 单if语句---适用于只需要一步判断,条件为真假
格式:
	if [ true/faile ];then
	  command
	fi
翻译:
	假如 [ 条件为真 ];那么
	  执行代码
	结束

#语法二: if-then-else两步判断语句---适用两步判断,条件为真,假时各做什么
格式:
	if [ true/faile ];then
	  command1
	else
	  command2
	...
	fi
翻译:
	假如 [ 条件为真 ];那么
	  执行代码块1
	否则
	  执行代码块2
	...
	结束

#语法三: if-then-elif多步判断语句---适用于两个但不包括两个以上的条件判断
格式:
	if [ true/faile ];then
	  command1
	elif [ true/faile2 ];then
	  command2
	elif [ true/faile3 ];then
	  command3
	...
	else
	  commandx
	fi
翻译:
	假如 [ 条件为真 ];那么
	  执行代码块1
	假如 [ 条件2为真 ];那么
	  执行代码块2
	假如 [ 条件3为真 ];那么
	  执行代码块3
	...
	否则---以上都没有满足
	  执行代码块x
	结束
```
