## 批量添加用户名或组的cmd指令
- for /L %i in (StartN,Jump,EndN) net user/group/localgroup UserName/GroupName/LocalGroupName PassWD/UserName/GroupName /add
