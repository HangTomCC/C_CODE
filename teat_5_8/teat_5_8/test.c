#include <stdio.h>
//int Compare(int a, int b)
//{
//	int max = (a > b ? a : b);
//	return max;
//	
//}
//int main()
//{
//	int num = Compare(10, 50);
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	int num = sizeof arr / sizeof arr[0];
//	printf("%d\n",num);
//	return 0;
//}


//只要是整数，内存中存储的都是二进制的补码
// 正数 - 原，反，补相同
// 
//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;
//	//~ - 按二进制位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//补码 --> 反码：减一
//	//11111111111111111111111111111110
//	//反码 --> 原码：符号位不变，其余位取反
//	//10000000000000000000000000000001
//	//符号位是1，所以为-1
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++：先赋值，再++
//	//int b = ++a;//前置++：先++，再赋值
//	//int b = a--;
//	int b = --a;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	//真-非0
//	//假-0
//	//&& - 逻辑与
//	//|| = 逻辑或
//	int a = 0;
//	int b = 0;
//	//int c = a && b;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	/*if (a>b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}*/
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	auto int a = 10;//局部/自动变量,auto通常省略
//	return 0;
//}

//int main()
//{
//	register int a = 10;//建议吧a定义成寄存器变量
//	//int 定义的变量是有符号的 = signed int
//	//无符号的 - unsigned int
//	//struct - 结构体关键字
//	//union - 联合体，共用体关键字
//	//typedef - 类型定义 类型重定义 重新起名
//	typedef unsigned int u_int;//把unsigned int改为u_int
//	unsigned int a = 10;
//	u_int b = 10;
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static: 修饰局部变量，局部变量的生命周期变长
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}

//int main()
//{
//	//static: 修饰全局变量，改变了全局变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	extern int Add(int, int);//声明外部函数
//	//static: 修饰函数，改变了函数的作用域/链接属性，让静态的全局变量只能在自己所在的源文件内部使用
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//#define MAX 100;
//宏的定义:取最大值
//#define MAX(X,Y) (X>Y ? X:Y)
//int main()
//{
//	int sum = MAX(10, 20);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4个字节
//	//有一种变量是用来存放地址的-指针变量
//	int* p = &a;//取地址
//	*p = 20;//* - 解引用操作符
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	*pc = 'f';
	printf("%c\n", ch);
	return 0;
}