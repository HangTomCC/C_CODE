#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
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
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	//               bit\0
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);//没有放\0，继续打印
//	return 0;
//}

//实参传给形参的时候
//形参是实参的一份临时拷贝，对形参的修改是不会改变实参的
//int compare(int x,int y)//形式参数
//{
//	/*if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}*/
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入\n");
//	scanf("%d%d", &a, &b);
//	int sum = compare(a, b);//实际参数，有确切的值
//	printf("%d\n", sum);
//	return 0;
//}

//void exchange(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a\n");
//	scanf("%d", &a);
//	printf("请输入b\n");
//	scanf("%d", &b);
//	exchange(&a, &b);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}


//int is_prime(int x)
//{
//	int j = 0;
//	for ( j = 2; j < x; j++)
//	{
//		if (x%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	//打印100到200之间的素数
//	for ( i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//int is_run(int x)
//{
//	if ((x % 4 ==0) && (x%100 != 0))
//	{
//		return 1;
//	}
//	else if(x % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1000; i <= 2000; i++)
//	{
//		if (is_run(i) == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int two(int arr[],int x,int sum)//本质上arr是一个指针
//{
//	int left = 0;
//	int right = sum - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sum = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	while (1)
//	{
//		printf("查找那个数字\n");
//		scanf("%d", &a);
//		int b = two(arr, a,sum);//传递过去的是arr数组首元素的地址
//		if (b == -1)
//		{
//			printf("找不到\n");
//		}
//		else
//		{
//			printf("索引是%d", b);
//		}
//		
//	}
//	return 0;
//}

//int plus(int* x)
//{
//	return *x+1;
//}
//int main()
//{
//	int num = 0;
//	int a = 0;
//	int i = 0;
//	int sum = 0;
//	printf("你要调用几次函数？\n");
//	scanf("%d", &a);
//	for ( i = 0; i < a; i++)
//	{
//		sum += plus(&num);
//	}
//	printf("num = %d", sum);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d\n", printf("%d\n",printf("%d\n",432)));//print返回字符的个数
//	return 0;
//}

#include "add.h"//声明
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);//函数调用
	printf("%d\n", sum);
	return 0;
}
