#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (0 == a)
//		if (2 == b)//以防少一个等号不会报错
//			printf("hehe");
//		else
//			printf("haha");//就近匹配,非缩进对齐
//	return 0;


	//if(condition)
		//return x;
	//return y;函数遇到return即结束，xy只会返回一个，省略了else

//}

//int main()
//{
//	/*int num = 1;
//	if (num % 2 == 1)
//	{
//		printf("奇数");
//	}*/
//
//	/*int i=1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%5d",i);//break作用于while循环，在if中也会终止循环
//		continue；//跳过本次，执行下一次
//		i++;
//
//	}*/
//
//	//int day;
//	//scanf("%d", &day);
//	//switch (day)//整形表达式（char也是，存储的ascii是整形）
//	//{
//	//case 1://必须为整型常量
//	//	printf("星期一\n");
//	//	break;//避免持续执行，取值为范围时，多个case放在一起最后写结果：case 1：
//	//	//																case 2：
//	//	//																printf；break；
//
//	//case 2:
//	//	printf("星期二\n");
//	//	break;
//	//default:
//	//	printf("错误");
//	//	break;
//	//}
//
//
//	
//	return 0;
//}


//scanf和getchar读取原理以及while相关拓展

int main()
{
	//char password[20];
	//printf("请输入密码");
	//scanf("%s", password);//数组本身就是地址，不需要取地址
	////若其中有空格，不会继续读取
	//	while (getchar() != '\n')//getchar返回值是EOF（当文件（输入）末尾或输入错误时返回（可用ct+z返回）
	//	{
	//		getchar();//清理缓冲区（scanf未读取完的部分）直到换行
	//	}
	//printf("请确认密码Y/N");
	//int ret = getchar(); //EOF（值为 - 1）最好用int接收getchar，char无法接收 - 1
	//if ('Y' == ret)
	//	printf("Yes\n");
	//else
	//	printf("No\n");


	//只输出数字
	//char ch = '\0';//初始化不用管
	//while ((ch = getchar())!= EOF)//直到输入结束
	//{
	//	if (ch < '0' || ch > '9')
	//		continue;
	//	putchar(ch);
	//}

	return 0;
}

