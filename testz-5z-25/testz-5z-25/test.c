#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d", *p);
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//NULL - ��ʼ��ָ�룬��ָ�븳ֵ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	*pa = 10;//ָ��Ϊ��ʱ���ܷ���
//	if (pa != NULL)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for ( i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p = p + 1;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", *p);
//		p-=2;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	printf("%d\n", &arr[9] - &ch[0]);//err
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - ���ַ�������
//	char ch[5] = "bit";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	//1. &arr - ��������ĵ�ַ
//	//2. sizeof(arr) - sizeof(������������������ʾ����������- sizeof(������)���������������Ĵ�С
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	/*for ( i = 0; i < 10; i++)
//	{
//		printf("%p ===== %p\n", p+i,&arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa����һ������ָ��
//	//int** * pppa = &ppa;
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	return 0;
//}

//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	//�������� - �������
//	//ָ������ - ���ָ��
//	int* arr[3] = {&a,&b,&c};//ָ������
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%p\n", arr[i]);
//		printf("%d\n", *(arr[i]));
//	}
//	
//	return 0;
//}

//void MyInit(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void MyPrint(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//void MyReverse(int arr[], int sz)
//{
//	int left = arr[0];
//	int right = arr[sz - 1];
//	int i = 0;
//	for (i = 0; i < sz/2; i++)
//	{
//		arr[i] = arr[i] ^ arr[sz - (i + 1)];
//		arr[sz - (i + 1)] = arr[i] ^ arr[sz - (i + 1)];
//		arr[i] = arr[i] ^ arr[sz - (i + 1)];
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MyPrint(arr, sz);
//	//MyInit(arr,sz);
//	//MyPrint(arr, sz);
//	MyReverse(arr, sz);
//	MyPrint(arr, sz);
//	return 0;
//}


//void MyReverse2(int arr[], int arr1[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		arr[i] = arr[i] ^ arr1[i];
//		arr1[i] = arr[i] ^ arr1[i];
//		arr[i] = arr[i] ^ arr1[i];
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MyReverse2(arr,arr1,sz);
//	MyPrint(arr, sz);
//	MyPrint(arr1, sz);
//	return 0;
//}

int i;//ȫ�ֱ�������ʼ��Ĭ����0
int main()
{
	i--;
	i > sizeof(i) ? printf(">"): printf("<");
	// sizeof() - �������/������ռ�ڴ�Ĵ�С >=0 �޷�����
	return 0;
}