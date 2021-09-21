## for循环
```shell
	#for语法一
	for 变量 in 赋值1 赋值2 赋值3
	  do
	    command
	done
	
	#for语法二---C语言格式
	for ((变量;条件;自增自减运算))
	  do
	    command
	done
	
	#for语法拓展---无限循环
	for ((;;))
	  do
	    command
	done

## for的赋值

	1 for的直接赋值---for 变量 in 赋值1 赋值2 赋值3 ...
	
	2 for使用命令赋值---for 变量 in `command`
	
	3 for可赋值为一个字符串---for 变量 in 字符串1 字符串2 字符串3 ...

## for循环的优点

	1 节省内存
	
	2 结构清晰
	
	3 节省开发人力时间成本

## 循环控制

	1 sleep N: 脚本执行到此休眠N秒
	
	2 continue: 脚本执行到此跳过此次循环---for ((i=1;i<10;i++))
						 do
						   if [ $i -eq 5 ];then
						     continue---到这里表示循环到此结束,可以开始下次循环
						   else
						     echo $i
						   fi
						 done
						
	3 break: 跳出循环执行后续命令---与continue的区别是: 到break时跳出当前循环---书写位置与continue相同
		
		#break N: 表示从此往外数跳出--终止--第N层循环

```