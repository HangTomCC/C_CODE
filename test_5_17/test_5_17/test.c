//쳲��������У��׳�
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
//	//Stack overflow:ջ���
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
//	//�ݹ�
//	print(num);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	//�����ַ����ĳ���
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�
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
//�ݹ�
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


//쳲��������У�������������ǰ�������ĺ�
//1 1 2 3 5 8 13 21
//�ݹ�
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
//ѭ��(�Ƽ�)
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
//	//TDD ������������
//	int num = Facl(n);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr1[10] = { 'a',98};//a,b
//	char arr3[10] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ��-char 7*1 = 7
//
//	printf("%d\n", strlen(arr4));
//	//strlen���ַ��ĳ��� - '\0��֮ǰ���ַ�����
//
//	//1. strlen��l sizeofû����ô����
//	//2. strlen�����ַ������ȵ� - ֻ������ַ����󳤶ȨC������ - ʹ�õ���ͷ�ļ�
//	//3. sizeof������������顢���͵Ĵ�С - ��λ���ֽڨD������
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
	int arr1[][4] = { 1,2,3,4,5,6,7,8,9 };//�п���ʡ��
	int i = 0;
	//����arr
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