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

//int main()
//{
//	char password[20];
//	printf("请输入密码");
//	scanf("%s", password);//数组本身就是地址，不需要取地址
//	//若其中有空格，不会继续读取
//	while (getchar() != '\n')//getchar返回值是EOF（当文件（输入）末尾或输入错误时返回（可用ct+z返回）
//	{//先拿再判断，拿到\n结束
//		getchar();//清理缓冲区（scanf未读取完的部分）直到换行
//	}
//	printf("请确认密码Y/N");
//	int ret = getchar(); //EOF（值为 - 1）最好用int接收getchar，char无法接收 - 1
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//}


	//只输出数字
	//char ch = '\0';//初始化不用管
	//while ((ch = getchar())!= EOF)//直到输入结束
	//{
	//	if (ch < '0' || ch > '9')
	//		continue;
	//	putchar(ch);
	//}
	//char a[20];
	//scanf("%s", &a);
	//printf("%s", a);
	////读到空格就不读了

//	return 0;
//}

//int main()
//{
	//int year, month, date;
	//scanf("%4d%2d%2d",&year,&month,&date);//scanf写法
	//printf("year=%d\n", year);
	//printf("month=%02d\n",month);//输出两位，空位自动补零
	//printf("date=%02d\n", date);

	//float a=0.0f;////0.0编译器默认为double ，加f为float类型
	/*return 0;
}*/

//int main()//找出四个数的最大数
//{
//	int arr[4];
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);//注意写法
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		i++;
//	}
//	printf("max=%d", max);
//	return 0;
//}


//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 70;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right = sz-1;
	//int i = 1;

	//for (; left<=right;)//顺序数组使用二分查找效率更高，注意条件<=,<=说明还有数据可以被查找;
	//{
	//	//int mid = (left+right)/2;
	//	int mid = left + (right - left) / 2;//两者差值除二，加上小的部分left就是平均值，上一行left+right可能会超过int最大值

	//	if (arr[mid] == k)
	//	{
	//		printf("找到了，下标是%d", mid);
	//		break;
	//	}
	//	else if (arr[mid] < k)
	//		left = mid + 1;
	//	else
	//		right = mid-1;
	//}
	//if(left>right)
	//printf("没找到");

	//char arr1[] = "welcome to bit!!!!";
	//char arr2[] = "##################";
	//int left = 0;
	//int right = strlen(arr1)-1;//sizeof(arr1)/sizeof(arr1[0])-2,字符数组默认带/0，sizeof计入,strlen不计入
	//while (left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s", arr2);
	//	Sleep(600);//间隔600ms,0.6s；头文件windows.h
	//	system("cls");//库函数，执行系统命令，cls清空屏幕;头文件stdlib.h
	//	left++;
	//	right--;

	//}
	//printf("%s", arr2);

	//strcmp(password,"abc"==0),意为俩字符串（字符数组内为abc）相等，不能直接用==，引用头文件string.h


//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("***********************\n");
//	printf("********   1.play   *********\n");
//	printf("********   2.exit   *********\n");
//	printf("***********************\n");
}

//void game()//详细“39-27：00”
//{//srand需要随机数改变rand起点，防止伪随机
//	int guess = 0;
//	
//	int ret = rand()%101;//rand前需要srand，否则会生成伪随机数，范围0-32767
//	//任何数模一百为0-99，+1生成0-100的数
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input;
//	//只需设置一次起点
//	srand((unsigned int)time(NULL));//null为空指针相当于0；time返回值类型为time_t（时间戳，为一组数字），srand需要无符号整形，强制更改
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//				break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//	} while (1==input);
	//return 0;
	//}

//go to 语句
// go to ???;
//目标点为???:,不能跨函数跳转，适用于跳出多层嵌套结构

//系统命令，shutdown -s -t 60关机；shutdown -a 取消关机