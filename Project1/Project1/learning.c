#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//strlen未定义，引入头文件
//int main()
//{//字符数组：一组相同类型的元素
// //字符串在结尾隐藏\0,是字符串结尾的标志
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0' };
// //计算字符串长度
//	int len = strlen("abc");
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//无\0时打印随机值
//	printf("%d\n", len);
// //%s打印字符串
//  printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//
//int main()
//{
////转义字符：\+()改变原本意思
//	printf("%c",'\'');//%c打印字符  ’前加\防止前两个‘’组合
//	printf("\a");//警告字符
// // \ddd（ddd）为八进制数，打印时转为十进制，%c打印十进制ascii值对应的字符
// // \xdd 输入十六进制数
//	printf("%c\n", '\141');//a-65 a-97
//	printf("%d\n", strlen("c:\test\328\test.c"));//\t \32为转义字符计为1，\328的8不为八进制数
//	return 0;
//}
//
//int main()////条件语句
//{
//	int input;
//	printf("好好学习吗？（1/0）");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//
//int main()
//{
//	int line=0;
//	while (line < 10000)//循环
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if(line==10000)
//	{
//		printf("好offer");
//	}
//	return 0;
//}
//
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//
//	return z;
//}
//
//int main()
//{
//	int num1;
//	int num2;
//	scanf("%d%d", &num1, &num2);
//	//int sum=sum1+sum2;
//	//函数方式解决
//	int sum = add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };//不满十个数为不完全初始化，默认填充0
//	while (i < 10)
//	{
//		printf("%d\n",arr[i]);//用下标访问，i=0表示第一个数，以此类推
//		i++;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//移位操作符<<,>>移动的是二进制位
//	int a = 2;
//	int b = a << 1;//2为整形占四个字节32个比特位，所以二进制表示为0*30+10，向左移位后末尾为10，最后一位自动补零为100，转为十进制为4
//	prinf("%d\n", a);
//	return 0;
//}
//
////复合赋值 例a=a+3可以写为a+=3
//
//
//int main()
//{
//	//单目操作符
//	//!a.反逻辑符，真假转换，默认假为0，其余为真，用在if中判断a为真时，假时。。。。
//	int a = 0;
//	printf("d\n", !a);//打印为真，1；
//	return 0;
//}

//(int或其他数据类型）3.14--double(字面浮点默认为double） 转int

//int main()
//{
//	//比较取最大值
//	int a = 10;
//	int b = 20;
//	int r = (a > b ? a : b);//判断？前是否为真，真执行：前，反之；
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	int sum = add(2, 3);//函数调用操作符（）
//}

//typedef unsigned int unit;//重命名类型
//int main()
//{
//	//unsigned int=unit
//	return 0;
//}

//static
//修饰局部/全局变量（由外部连接属性变为内部连接属性（extern用不了））
//修饰函数 同全局变量



//void test()//自定义函数
//{
//	static int a = 1;//修饰局部变量时出作用域不销毁，改变了存储位置（栈区转静态区），影响生命周期至程序一样
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//		
//	return 0;
//}
//
////关键字：register int...建议放入寄存器→存储结构p20 1h
//
//#define add(x,y)          ((x)+(y))//本质是替换
//     //宏名 参数,无类型  宏体
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = add(a, b);//(a,b)→((x)+(y))
//	printf("%d\n", c);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	char sex[10];
//	int age;
//	int tele;
//};
//
//void print(struct stu* ps)
//{
//
//	printf("%s %s %d %d\n", (*ps).name, (*ps).sex, (*ps).age, (*ps).tele);
//	printf("%s %s %d %d\n", ps->name, ps->sex, ps->age, ps->tele);//结构体“指针变量”可以用箭头形式 
//}
//
//
//int main()
//{
//
//
//
//
//
//	struct stu s = { "张三","nan",20,17856412105 };//s前表示一个数据类型，大括号初始化。不用函数打印用printf（"%？"s.xxx打印）
//	print(&s);//取地址给print函数，地址要存到指针变量里
//	return 0;
//}
////指针知识点：*p解引用操作符：将变量取地址，再将地址解引用从而更改变量值
//// int a=xxx;int* p=&a;*p=xyy,将xxx改成了xyy