//ð������
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void bubble_sort(int* arr[],int sz)
//{
//	int flag = 1;//������һ������������Ѿ�����
//	//ȷ��ð�����������
//	int i = 0;
//	for ( i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int c = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = c;
//				flag = 0;//���������������ʵ����ȫ����
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
//	//ð������
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
//	printf("%p\n", &arr);//����ĵ�ַ����ǰ������һ��
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.size_of(������)����������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//	//2. &�������������������������飬&��������ȡ��������������ĵ�ַ
//	
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);*/
//	return 0;
//}
