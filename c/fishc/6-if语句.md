# C语言--if语句

### 单if语句
```c
格式:---表达式为真则执行
	
	if (表达式)---逻辑值的表达式
	{
		commands;
	}

释义:
	如果 (表达式为真)
	{
		执行命令;
	}
```

### if-else语句
```c
格式:
	
	if (表达式)
	{
		commands;
	}
	else
	{
		commands;
	}

释义:
	如果 (表达式为真)
	{
		执行命令;
	}
	否则
	{
		执行命令;
	}
```
### if-elseif
```c
格式: 
	if (表达式1) {commands1;}
	else if (表达式2) {commands2;}
	else if (表达式3) {commands3;}
	...
	else if (表达式n) {commands n;}
	else {commands n+1;}

释义:
	如果 (表达式1为真) {执行命令1;}
	如果 (表达式2为真) {执行命令2;}
	如果 (表达式3为真) {执行命令3;}
	...
	如果 (表达式n为真) {执行命令n;}
	否则 {执行n+1命令;}
```
