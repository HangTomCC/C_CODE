#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	/*int arr[10] = { 0 };
//	printf("%d\n", sizeof (int[10]));*/
//
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(s = a + 5));//����������
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	////~ ��λȡ��
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111 - ����
//	////11111111111111111111111111111110 - ����
//	////10000000000000000000000000000001 - ԭ�� ��ӡ
//	//printf("%d\n", ~a);
//
//	//Ӧ�ó���
//	int a = 11;
//	a = a | (1 << 2);
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//00000000000000000000000000001111
//	printf("%d\n", a);
//	a = a &(~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 }; char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch); return 0;
//}

//ѧ��
//�ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1��bing
//	struct Stu s1 = { "����",20,"202015020042" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps -> name);
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	//a��b������
//	//00000011
//	//00000000000000000000000000000011
//	//01111111
//	//00000000000000000000000001111111
//	//��Ӻ�
//	//00000000000000000000000010000010
//	char c = a + b;
//	//10000010 - c
//	//����������
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ�� //-126
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("%d\n", a);
//}

//ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	int* pa = &a;//*pa�ܹ�����4���ֽ�
//	//*pa = 0;
//	char* pc = &a;//*pc�ܹ�����1���ֽ�
//	*pc = 0;
//	//printf("%d\n", pa);
//	printf("%d\n", pc);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	//int* p = arr;
//	char* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//Ұָ�루���⣩
//int main()
//{
//	int a;//�ֲ���������ʼ���������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}

//ָ��Խ�磨Ұָ�룩
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 12; i++)
//	{
//		p++;
//	}	
//	return 0;
//}

//�˷��ˣ�Ұָ�룩
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20;
	return 0;
}