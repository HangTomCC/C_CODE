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
//	printf("%d\n", sizeof(s = a + 5));//不参与运算
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	////~ 按位取反
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111 - 补码
//	////11111111111111111111111111111110 - 反码
//	////10000000000000000000000000000001 - 原码 打印
//	//printf("%d\n", ~a);
//
//	//应用场景
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

//学生
//结构体类型
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct Stu这个类型创建了一个学生对象s1，bing
//	struct Stu s1 = { "张三",20,"202015020042" };
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
//	//a和b如何相加
//	//00000011
//	//00000000000000000000000000000011
//	//01111111
//	//00000000000000000000000001111111
//	//相加后
//	//00000000000000000000000010000010
//	char c = a + b;
//	//10000010 - c
//	//整形提升后
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码 //-126
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("%d\n", a);
//}

//指针类型决定了指针进行解引用操作时，能够访问空间的大小
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	int* pa = &a;//*pa能够访问4个字节
//	//*pa = 0;
//	char* pc = &a;//*pc能够访问1个字节
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

//野指针（避免）
//int main()
//{
//	int a;//局部变量不初始化，是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	*p = 20;
//	return 0;
//}

//指针越界（野指针）
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

//退房了（野指针）
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