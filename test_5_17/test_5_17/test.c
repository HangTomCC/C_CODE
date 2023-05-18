//斐波那契数列，阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("hh\n");
//	main();
//	return 0;
//
//	//Stack overflow:栈溢出
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d\n", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	//计算字符串的长度
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int Facl(int x)
//{
//	int i = 0;
//	int c = 1;
//	for (i = 1; i < x; i++)
//	{
//		c *= (i + 1);
//	}
//	return c;
//}
//递归
//int Facl(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * Facl(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	
//	scanf("%d", &n);
//	int num = Facl(n);
//	
//	printf("%d\n", num);
//	return 0;
//}


//斐波那契数列：第三个数等于前两个数的和
//1 1 2 3 5 8 13 21
//递归
//int Facl(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Facl(x - 1) + Facl(x - 2);
//	}
//}
//循环(推荐)
//int Facl(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 1;
//	while (x>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//TDD 测试驱动开发
//	int num = Facl(n);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化,剩下的元素默认初始化为0
//	char arr1[10] = { 'a',98};//a,b
//	char arr3[10] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof计算arr4所占空间的大小
//	//7个元素-char 7*1 = 7
//
//	printf("%d\n", strlen(arr4));
//	//strlen求字符的长度 - '\0’之前的字符个数
//
//	//1. strlen和l sizeof没有仕么关联
//	//2. strlen是求字符患长度的 - 只能针对字符患求长度–库丽数 - 使用得引头文件
//	//3. sizeof计算变量、数组、类型的大小 - 单位是字节―操作符
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b,','c'};
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	for ( i = 0; i < (int)strlen(arr); i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//[a][b][c][d][e][f][\0]
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[3][4] = { {1,2,3},{4,5},6,7,8,9 };
	int arr1[][4] = { 1,2,3,4,5,6,7,8,9 };//行可以省略
	int i = 0;
	//遍历arr
	for ( i = 0; i < 3; i++)
	{
		int j = 0;
		for ( j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n",i,j,arr[i][j]);
		}
		
	}
	return 0;
}