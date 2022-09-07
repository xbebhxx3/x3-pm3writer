# x3-pm3writer
proxmark3(pm3)ic(1k)写入卡工具
# 功能
 帮助proxmark3(pm3)快速写入ic卡
# 食用方法
## ~~1.直接运行并根据提示输入~~

目前仅支持命令行调用

## 2.命令行调用

    x3-pm3writer.exe PortName FileName PasswordFile [A/B]
    proxmark3(pm3)ic(1k)卡写入工具  v1.0
    目前仅支持1k卡,其他容量将在后续版本支持
    邮箱:admin@n103.top
    官网:www.n103.top
                              by:  xbebhxx3

     PortName       proxmark3(pm3)端口
     FileName       数据文件
     FileName       包含密码的文件,为d则使用默认密码,为f则使用待写入文件中的密码
     [A/B]  (可选)使用Key A或Key B
 
 ## 示例
     x3-pm3writer.exe com3 1.bin f a
     x3-pm3writer.exe com3 1.bin d 
     x3-pm3writer.exe com3 1.bin 2.bin
 
# 编译环境
MinGW64（g++）

