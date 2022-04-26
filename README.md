# 介绍

自学 C++ primer plus 第六版，写的 cases。


# 目 录
```txt
版权信息
版权声明
内容提要
作者简介
前言
第1章 预备知识
1.1 C++简介
1.2 C++简史
1.2.1 C语言
1.2.2 C语言编程原理
1.2.3 面向对象编程
1.2.4 C++和泛型编程
1.2.5 C++的起源
1.3 可移植性和标准
1.3.1 C++的发展
1.3.2 本书遵循的C++标准
1.4 程序创建的技巧
1.4.1 创建源代码文件
1.4.2 编译和链接
1.5 总结
第2章 开始学习C++
2.1 进入C++
2.1.1 main( )函数
2.1.2 C++注释
2.1.3 C++预处理器和iostream文件
2.1.4 头文件名
2.1.5 名称空间
2.1.6 使用cout进行C++输出
2.1.7 C++源代码的格式化
2.2 C++语句
2.2.1 声明语句和变量
2.2.2 赋值语句
2.2.3 cout的新花样
2.3 其他C++语句
2.3.1 使用cin
2.3.2 使用cout进行拼接
2.3.3 类简介
2.4 函数
2.4.1 使用有返回值的函数
2.4.2 函数变体
2.4.3 用户定义的函数
2.4.4 用户定义的有返回值的函数
2.4.5 在多函数程序中使用using编译指令
2.5 总结
2.6 复习题
2.7 编程练习
第3章 处理数据
3.1 简单变量
3.1.1 变量名
3.1.2 整型
3.1.3 整型short、int、long和long long
3.1.4 无符号类型
3.1.5 选择整型类型
3.1.6 整型字面值
3.1.7 C++如何确定常量的类型
3.1.8 char类型：字符和小整数
3.1.9 bool类型
3.2 const限定符
3.3 浮点数
3.3.1 书写浮点数
3.3.2 浮点类型
3.3.3 浮点常量
3.3.4 浮点数的优缺点
3.4 C++算术运算符
3.4.1 运算符优先级和结合性
3.4.2 除法分支
3.4.3 求模运算符
3.4.4 类型转换
3.4.5 C++11中的auto声明
3.5 总结
3.6 复习题
3.7 编程练习
第4章 复合类型
4.1 数组
4.1.1 程序说明
4.1.2 数组的初始化规则
4.1.3 C++11数组初始化方法
4.2 字符串
4.2.1 拼接字符串常量
4.2.2 在数组中使用字符串
4.2.3 字符串输入
4.2.4 每次读取一行字符串输入
4.2.5 混合输入字符串和数字
4.3 string类简介
4.3.1 C++11字符串初始化
4.3.2 赋值、拼接和附加
4.3.3 string类的其他操作
4.3.4 string类I/O
4.3.5 其他形式的字符串字面值
4.4 结构简介
4.4.1 在程序中使用结构
4.4.2 C++11结构初始化
4.4.3 结构可以将string类作为成员吗
4.4.4 其他结构属性
4.4.5 结构数组
4.4.6 结构中的位字段
4.5 共用体
4.6 枚举
4.6.1 设置枚举量的值
4.6.2 枚举的取值范围
4.7 指针和自由存储空间
4.7.1 声明和初始化指针
4.7.2 指针的危险
4.7.3 指针和数字
4.7.4 使用new来分配内存
4.7.5 使用delete释放内存
4.7.6 使用new来创建动态数组
4.8 指针、数组和指针算术
4.8.1 程序说明
4.8.2 指针小结
4.8.3 指针和字符串
4.8.4 使用new创建动态结构
4.8.5 自动存储、静态存储和动态存储
4.9 类型组合
4.10 数组的替代品
4.10.1 模板类vector
4.10.2 模板类array（C++11）
4.10.3 比较数组、vector对象和array对象
4.11 总结
4.12 复习题
4.13 编程练习
第5章 循环和关系表达式
5.1 for循环
5.1.1 for循环的组成部分
5.1.2 回到for循环
5.1.3 修改步长
5.1.4 使用for循环访问字符串
5.1.5 递增运算符（++）和递减运算符（−−）
5.1.6 副作用和顺序点
5.1.7 前缀格式和后缀格式
5.1.8 递增/递减运算符和指针
5.1.9 组合赋值运算符
5.1.10 复合语句（语句块）
5.1.11 其他语法技巧—逗号运算符
5.1.12 关系表达式
5.1.13 赋值、比较和可能犯的错误
5.1.14 C-风格字符串的比较
5.1.15 比较string类字符串
5.2 while循环
5.2.1 for与while
5.2.2 等待一段时间：编写延时循环
5.3 do while循环
5.4 基于范围的for循环（C++11）
5.5 循环和文本输入
5.5.1 使用原始的cin进行输入
5.5.2 使用cin.get(char)进行补救
5.5.3 使用哪一个cin.get( )
5.5.4 文件尾条件
5.5.5 另一个cin.get( )版本
5.6 嵌套循环和二维数组
5.6.1 初始化二维数组
5.6.2 使用二维数组
5.7 总结
5.8 复习题
5.9 编程练习
第6章 分支语句和逻辑运算符
6.1 if语句
6.1.1 if else语句
6.1.2 格式化if else语句
6.1.3 if else if else结构
6.2 逻辑表达式
6.2.1 逻辑OR运算符：||
6.2.2 逻辑AND运算符：&&
6.2.3 用&&来设置取值范围
6.2.4 逻辑NOT运算符：!
6.2.5 逻辑运算符细节
6.2.6 其他表示方式
6.3 字符函数库cctype
6.4 ?:运算符
6.5 switch语句
6.5.1 将枚举量用作标签
6.5.2 switch和if else
6.6 break和continue语句
6.7 读取数字的循环
6.8 简单文件输入/输出
6.8.1 文本I/O和文本文件
6.8.2 写入到文本文件中
6.8.3 读取文本文件
6.9 总结
6.10 复习题
6.11 编程练习
第7章 函数——C++的编程模块
7.1 复习函数的基本知识
7.1.1 定义函数
7.1.2 函数原型和函数调用
7.2 函数参数和按值传递
7.2.1 多个参数
7.2.2 另外一个接受两个参数的函数
7.3 函数和数组
7.3.1 函数如何使用指针来处理数组
7.3.2 将数组作为参数意味着什么
7.3.3 更多数组函数示例
7.3.4 使用数组区间的函数
7.3.5 指针和const
7.4 函数和二维数组
7.5 函数和C-风格字符串
7.5.1 将C-风格字符串作为参数的函数
7.5.2 返回C-风格字符串的函数
7.6 函数和结构
7.6.1 传递和返回结构
7.6.2 另一个处理结构的函数示例
7.6.3 传递结构的地址
7.7 函数和string对象
7.8 函数与array对象
7.9 递归
7.9.1 包含一个递归调用的递归
7.9.2 包含多个递归调用的递归
7.10 函数指针
7.10.1 函数指针的基础知识
7.10.2 函数指针示例
7.10.3 深入探讨函数指针
7.10.4 使用typedef进行简化
7.11 总结
7.12 复习题
7.13 编程练习
第8章 函数探幽
8.1 C++内联函数
8.2 引用变量
8.2.1 创建引用变量
8.2.2 将引用用作函数参数
8.2.3 引用的属性和特别之处
8.2.4 将引用用于结构
8.2.5 将引用用于类对象
8.2.6 对象、继承和引用
8.2.7 何时使用引用参数
8.3 默认参数
8.4 函数重载
8.4.1 重载示例
8.4.2 何时使用函数重载
8.5 函数模板
8.5.1 重载的模板
8.5.2 模板的局限性
8.5.3 显式具体化
8.5.4 实例化和具体化
8.5.5 编译器选择使用哪个函数版本
8.5.6 模板函数的发展
8.6 总结
8.7 复习题
8.8 编程练习
第9章 内存模型和名称空间
9.1 单独编译
9.2 存储持续性、作用域和链接性
9.2.1 作用域和链接
9.2.2 自动存储持续性
9.2.3 静态持续变量
9.2.4 静态持续性、外部链接性
9.2.5 静态持续性、内部链接性
9.2.6 静态存储持续性、无链接性
9.2.7 说明符和限定符
9.2.8 函数和链接性
9.2.9 语言链接性
9.2.10 存储方案和动态分配
9.3 名称空间
9.3.1 传统的C++名称空间
9.3.2 新的名称空间特性
9.3.3 名称空间示例
9.3.4 名称空间及其前途
9.4 总结
9.5 复习题
9.6 编程练习
第10章 对象和类
10.1 过程性编程和面向对象编程
10.2 抽象和类
10.2.1 类型是什么
10.2.2 C++中的类
10.2.3 实现类成员函数
10.2.4 使用类
10.2.5 修改实现
10.2.6 小结
10.3 类的构造函数和析构函数
10.3.1 声明和定义构造函数
10.3.2 使用构造函数
10.3.3 默认构造函数
10.3.4 析构函数
10.3.5 改进Stock类
10.3.6 构造函数和析构函数小结
10.4 this指针
10.5 对象数组
10.6 类作用域
10.6.1 作用域为类的常量
10.6.2 作用域内枚举（C++11）
10.7 抽象数据类型
10.8 总结
10.9 复习题
10.10 编程练习
第11章 使用类
11.1 运算符重载
11.2 计算时间：一个运算符重载示例
11.2.1 添加加法运算符
11.2.2 重载限制
11.2.3 其他重载运算符
11.3 友元
11.3.1 创建友元
11.3.2 常用的友元：重载<<运算符
11.4 重载运算符：作为成员函数还是非成员函数
11.5 再谈重载：一个矢量类
11.5.1 使用状态成员
11.5.2 为Vector类重载算术运算符
11.5.3 对实现的说明
11.5.4 使用Vector类来模拟随机漫步
11.6 类的自动转换和强制类型转换
11.6.1 转换函数
11.6.2 转换函数和友元函数
11.7 总结
11.8 复习题
11.9 编程练习
第12章 类和动态内存分配
12.1 动态内存和类
12.1.1 复习示例和静态类成员
12.1.2 特殊成员函数
12.1.3 回到Stringbad：复制构造函数的哪里出了问题
12.1.4 Stringbad的其他问题：赋值运算符
12.2 改进后的新String类
12.2.1 修订后的默认构造函数
12.2.2 比较成员函数
12.2.3 使用中括号表示法访问字符
12.2.4 静态类成员函数
12.2.5 进一步重载赋值运算符
12.3 在构造函数中使用new时应注意的事项
12.3.1 应该和不应该
12.3.2 包含类成员的类的逐成员复制
12.4 有关返回对象的说明
12.4.1 返回指向const对象的引用
12.4.2 返回指向非const对象的引用
12.4.3 返回对象
12.4.4 返回const对象
12.5 使用指向对象的指针
12.5.1 再谈new和delete
12.5.2 指针和对象小结
12.5.3 再谈定位new运算符
12.6 复习各种技术
12.6.1 重载<<运算符
12.6.2 转换函数
12.6.3 其构造函数使用new的类
12.7 队列模拟
12.7.1 队列类
12.7.2 Customer类
12.7.3 ATM模拟
12.8 总结
12.9 复习题
12.10 编程练习
第13章 类继承
13.1 一个简单的基类
13.1.1 派生一个类
13.1.2 构造函数：访问权限的考虑
13.1.3 使用派生类
13.1.4 派生类和基类之间的特殊关系
13.2 继承：is-a关系
13.3 多态公有继承
13.3.1 开发Brass类和BrassPlus类
13.4 静态联编和动态联编
13.4.1 指针和引用类型的兼容性
13.4.2 虚成员函数和动态联编
13.4.3 有关虚函数注意事项
13.5 访问控制：protected
13.6 抽象基类
13.6.1 应用ABC概念
13.6.2 ABC理念
13.7 继承和动态内存分配
13.7.1 第一种情况：派生类不使用new
13.7.2 第二种情况：派生类使用new
13.7.3 使用动态内存分配和友元的继承示例
13.8 类设计回顾
13.8.1 编译器生成的成员函数
13.8.2 其他的类方法
13.8.3 公有继承的考虑因素
13.8.4 类函数小结
13.9 总结
13.10 复习题
13.11 编程练习
第14章 C++中的代码重用
14.1 包含对象成员的类
14.1.1 valarray类简介
14.1.2 Student类的设计
14.1.3 Student类示例
14.2 私有继承
14.2.1 Student类示例（新版本）
14.2.2 使用包含还是私有继承
14.2.3 保护继承
14.2.4 使用using重新定义访问权限
14.3 多重继承
14.3.1 有多少Worker
14.3.2 哪个方法
14.3.3 MI小结
14.4 类模板
14.4.1 定义类模板
14.4.2 使用模板类
14.4.3 深入探讨模板类
14.4.4 数组模板示例和非类型参数
14.4.5 模板多功能性
14.4.6 模板的具体化
14.4.7 成员模板
14.4.8 将模板用作参数
14.4.9 模板类和友元
14.4.10 模板别名（C++11）
14.5 总结
14.6 复习题
14.7 编程练习
第15章 友元、异常和其他
15.1 友元
15.1.1 友元类
15.1.2 友元成员函数
15.1.3 其他友元关系
15.1.4 共同的友元
15.2 嵌套类
15.2.1 嵌套类和访问权限
15.2.2 模板中的嵌套
15.3 异常
15.3.1 调用abort( )
15.3.2 返回错误码
15.3.3 异常机制
15.3.4 将对象用作异常类型
15.3.5 异常规范和C++11
15.3.6 栈解退
15.3.7 其他异常特性
15.3.8 exception类
15.3.9 异常、类和继承
15.3.10 异常何时会迷失方向
15.3.11 有关异常的注意事项
15.4 RTTI
15.4.1 RTTI的用途
15.4.2 RTTI的工作原理
15.5 类型转换运算符
15.6 总结
15.7 复习题
15.8 编程练习
第16章 string类和标准模板库
16.1 string类
16.1.1 构造字符串
16.1.2 string类输入
16.1.3 使用字符串
16.1.4 string还提供了哪些功能
16.1.5 字符串种类
16.2 智能指针模板类
16.2.1 使用智能指针
16.2.2 有关智能指针的注意事项
16.2.3 unique_ptr为何优于auto_ptr
16.2.4 选择智能指针
16.3 标准模板库
16.3.1 模板类vector
16.3.2 可对矢量执行的操作
16.3.3 对矢量可执行的其他操作
16.3.4 基于范围的for循环（C++11）
16.4 泛型编程
16.4.1 为何使用迭代器
16.4.2 迭代器类型
16.4.3 迭代器层次结构
16.4.4 概念、改进和模型
16.4.5 容器种类
16.4.4 关联容器
16.4.5 无序关联容器（C++11）
16.5 函数对象
16.5.1 函数符概念
16.5.2 预定义的函数符
16.5.3 自适应函数符和函数适配器
16.6 算法
16.6.1 算法组
16.6.2 算法的通用特征
16.6.3 STL和string类
16.6.4 函数和容器方法
16.6.5 使用STL
16.7 其他库
16.7.1 vector、valarray和array
16.7.2 模板initializer_list（C++11）
16.7.3 使用initializer_list
16.8 总结
16.9 复习题
16.10 编程练习
第17章 输入、输出和文件
17.1 C++输入和输出概述
17.1.1 流和缓冲区
17.1.2 流、缓冲区和iostream文件
17.1.3 重定向
17.2 使用cout进行输出
17.2.1 重载的<<运算符
17.2.2 其他ostream方法
17.2.3 刷新输出缓冲区
17.2.4 用cout进行格式化
17.3 使用cin进行输入
17.3.1 cin>>如何检查输入
17.3.2 流状态
17.3.3 其他istream类方法
17.3.4 其他istream方法
17.4 文件输入和输出
17.4.1 简单的文件I/O
17.4.2 流状态检查和is_open( )
17.4.3 打开多个文件
17.4.4 命令行处理技术
17.4.5 文件模式
17.4.6 随机存取
17.5 内核格式化
17.6 总结
17.7 复习题
17.8 编程练习
第18章 探讨C++新标准
18.1 复习前面介绍过的C++11功能
18.1.1 新类型
18.1.2 统一的初始化
18.1.3 声明
18.1.4 智能指针
18.1.5 异常规范方面的修改
18.1.6 作用域内枚举
18.1.7 对类的修改
18.1.8 模板和STL方面的修改
18.1.9 右值引用
18.2 移动语义和右值引用
18.2.1 为何需要移动语义
18.2.2 一个移动示例
18.2.3 移动构造函数解析
18.2.4 赋值
18.2.5 强制移动
18.3 新的类功能
18.3.1 特殊的成员函数
18.3.2 默认的方法和禁用的方法
18.3.3 委托构造函数
18.3.4 继承构造函数
18.3.5 管理虚方法：override和final
18.4 Lambda函数
18.4.1 比较函数指针、函数符和Lambda函数
18.4.2 为何使用lambda
18.5 包装器
18.5.1 包装器function及模板的低效性
18.5.2 修复问题
18.5.3 其他方式
18.6 可变参数模板
18.6.1 模板和函数参数包
18.6.2 展开参数包
18.6.3 在可变参数模板函数中使用递归
18.7 C++11新增的其他功能
18.7.1 并行编程
18.7.2 新增的库
18.7.3 低级编程
18.7.4 杂项
18.8 语言变化
18.8.1 Boost项目
18.8.2 TR1
18.8.3 使用Boost
18.9 接下来的任务
18.10 总结
18.11 复习题
18.12 编程练习
附录A 计数系统
A.1 十进制数
A.2 八进制整数
A.3 十六进制数
A.4 二进制数
A.5 二进制和十六进制
附录B C++保留字
B.1 C++关键字
B.2 替代标记
B.3 C++库保留名称
B.4 有特殊含义的标识符
附录C ASCII字符集
附录D 运算符优先级
附录E 其他运算符
E.1 按位运算符
E.1.1 移位运算符
E.1.2 逻辑按位运算符
E.1.3 按位运算符的替代表示
E.1.4 几种常用的按位运算符技术
E.2 成员解除引用运算符
E.3 alignof（C++11）
E.4 noexcept（C++11）
附录F 模板类string
F.1 13种类型和一个常量
F.2 数据信息、构造函数及其他
F.2.1 默认构造函数
F.2.2 使用C-风格字符串的构造函数
F.2.3 使用部分C-风格字符串的构造函数
F.2.4 使用左值引用的构造函数
F.2.5 使用右值引用的构造函数（C++11）
F.2.6 使用一个字符的n个副本的构造函数
F.2.7 使用区间的构造函数
F.2.8 使用初始化列表的构造函数（C++11）
F.2.9 内存杂记
F.3 字符串存取
F.4 基本赋值
F.5 字符串搜索
F.5.1 find( )系列
F.5.2 rfind( )系列
F.5.3 find_first_of( )系列
F.5.4 find_last_of( )系列
F.5.5 find_first_not_of( )系列
F.5.6 find_last_not_of( )系列
F.6 比较方法和函数
F.7 字符串修改方法
F.7.1 用于追加和相加的方法
F.7.2 其他赋值方法
F.7.3 插入方法
F.7.4 清除方法
F.7.5 替换方法
F.7.6 其他修改方法：copy( )和swap( )
F.8 输出和输入
附录G 标准模板库方法和函数
G.1 STL和C++11
G.1.1 新增的容器
G.1.2 对C++98容器所做的修改
G.2 大部分容器都有的成员
G.3 序列容器的其他成员
G.4 set和map的其他操作
G.4 无序关联容器（C++11）
G.5 STL函数
G.5.1 非修改式序列操作
G.5.2 修改式序列操作
G.5.3 排序和相关操作
G.5.4 数值运算
附录H 精选读物和网上资源
H.1 精选读物
H.2 网上资源
附录I 转换为ISO标准C++
I.1 使用一些预处理器编译指令的替代品
I.1.1 使用const而不是#define来定义常量
I.1.2 使用inline而不是# define来定义小型函数
I.2 使用函数原型
I.3 使用类型转换
I.4 熟悉C++特性
I.5 使用新的头文件
I.6 使用名称空间
I.7 使用智能指针
I.8 使用string类
I.9 使用STL
```
