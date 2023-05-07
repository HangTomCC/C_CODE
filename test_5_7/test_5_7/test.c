#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>//system
#include <string.h>//strcmp
#include <stdio.h>
//int main()
//{
//	//交换两个整型变量
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	printf("a=%d\n b=%d\n", a,b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d\n b=%d\n", a,b);
//	return 0;
//}

//int main()
//{
//	//用两个变量交换两个整型变量
//	int a = 3;
//	int b = 5;
//	printf("a=%d\n b=%d\n", a, b);
//	a = a + b;//a = 8;b = 5;
//	b = a - b;//a = 8;b = 3;
//	a = a - b;//a = 5;b = 3;
//	printf("a=%d\n b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	//用两个变量交换两个整型变量:防止溢出
//	int a = 3;
//	int b = 5;
//	printf("a=%d\n b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d\n b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof arr / sizeof arr[0];
//	for (int i = 0; i < sz; i++)
//	{
//		//统计arr[i]在数组中出现了几次
//		int count = 0;
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int ret = 0;
//	int sz = sizeof arr / sizeof arr[0];
//	for (int i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("%d", ret);
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	//关机
	//system: 专门来执行系统命令
	system("shutdown -s -t 60");
	again:
	printf("请输入：航哥");
	scanf("%s", input);
	if (strcmp(input,"航哥") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}