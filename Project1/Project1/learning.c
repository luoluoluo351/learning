#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//strlenδ���壬����ͷ�ļ�
//int main()
//{//�ַ����飺һ����ͬ���͵�Ԫ��
// //�ַ����ڽ�β����\0,���ַ�����β�ı�־
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0' };
// //�����ַ�������
//	int len = strlen("abc");
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//��\0ʱ��ӡ���ֵ
//	printf("%d\n", len);
// //%s��ӡ�ַ���
//  printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//
//int main()
//{
////ת���ַ���\+()�ı�ԭ����˼
//	printf("%c",'\'');//%c��ӡ�ַ�  ��ǰ��\��ֹǰ�����������
//	printf("\a");//�����ַ�
// // \ddd��ddd��Ϊ�˽���������ӡʱתΪʮ���ƣ�%c��ӡʮ����asciiֵ��Ӧ���ַ�
// // \xdd ����ʮ��������
//	printf("%c\n", '\141');//a-65 a-97
//	printf("%d\n", strlen("c:\test\328\test.c"));//\t \32Ϊת���ַ���Ϊ1��\328��8��Ϊ�˽�����
//	return 0;
//}
//
//int main()////�������
//{
//	int input;
//	printf("�ú�ѧϰ�𣿣�1/0��");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer");
//	else
//		printf("������\n");
//	return 0;
//}
//
//int main()
//{
//	int line=0;
//	while (line < 10000)//ѭ��
//	{
//		printf("д���룺%d\n", line);
//		line++;
//	}
//	if(line==10000)
//	{
//		printf("��offer");
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
//	//������ʽ���
//	int sum = add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };//����ʮ����Ϊ����ȫ��ʼ����Ĭ�����0
//	while (i < 10)
//	{
//		printf("%d\n",arr[i]);//���±���ʣ�i=0��ʾ��һ�������Դ�����
//		i++;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//��λ������<<,>>�ƶ����Ƕ�����λ
//	int a = 2;
//	int b = a << 1;//2Ϊ����ռ�ĸ��ֽ�32������λ�����Զ����Ʊ�ʾΪ0*30+10��������λ��ĩβΪ10�����һλ�Զ�����Ϊ100��תΪʮ����Ϊ4
//	prinf("%d\n", a);
//	return 0;
//}
//
////���ϸ�ֵ ��a=a+3����дΪa+=3
//
//
//int main()
//{
//	//��Ŀ������
//	//!a.���߼��������ת����Ĭ�ϼ�Ϊ0������Ϊ�棬����if���ж�aΪ��ʱ����ʱ��������
//	int a = 0;
//	printf("d\n", !a);//��ӡΪ�棬1��
//	return 0;
//}

//(�������ͣ�3.14--double(���渡��Ĭ��Ϊdouble�� תint

//int main()
//{
//	//�Ƚ�ȡ���ֵ
//	int a = 10;
//	int b = 20;
//	int r = (a > b ? a : b);//�жϣ�ǰ�Ƿ�Ϊ�棬��ִ�У�ǰ����֮��
//	printf("%d\n", r);
//
//	return 0;
//}


int main()
{
	int sum = add(2, 3);//�������ò���������
}