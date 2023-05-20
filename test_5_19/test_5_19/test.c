//冒泡排序
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void bubble_sort(int* arr[],int sz)
//{
//	int flag = 1;//假设这一趟排序的数据已经有序
//	//确定冒泡排序的趟数
//	int i = 0;
//	for ( i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int c = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = c;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 59,8,75,6,45,45,3,2,91,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序
//	bubble_sort(&arr,sz);
//	for ( i = 0; i < sz; i++)
//	{
//		printf( "%d\n",arr[i] );
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 59,8,75,6,45,45,3,2,91,0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);//数组的地址，跟前两个不一样
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.size_of(数组名)：数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//	//2. &数组名：数组名代表整个数组，&数组名，取出的是整个数组的地址
//	
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);*/
//	return 0;
//}
