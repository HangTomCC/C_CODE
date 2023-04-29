#define _CRT_SECURE_NO_WARNINGS
//std - 标准
//i - input
//o - output

//运行代码：fn+ctrl+f5

#include <stdio.h>
//C语言代码中一腚要有main函数，主函数
//标准的主函数写法
// 
//main：程序的入口，有且只有一个
//int main()
//{
//	printf("hhhhh");//printf：库函数，用来打印数据
//	return 0;
//}

//char，int
//short int : 短整型
//long ：长整形
//int main()
//{
//	char ch = 'A';
//	int age = 20;
//	long n = 100;
//	float f = 1.2;
//	double d = 3.14;
//	printf("%c\n", ch);//%c:打印字符格式的数据
//	printf("%d\n", age);//%d: 打印整形十进制数据
//	printf("%d\n", n);
//	printf("%f\n", f);//%f: 打印浮点型
//	printf("%lf\n", d);//%lf: 打印双精度浮点型
//	return 0;
//}

//查看数据类型的空间
//int main()
//{
//	printf("char:%d\n", sizeof(char));
//	printf("int:%d\n", sizeof(int));
//	printf("short:%d\n", sizeof(short));
//	printf("long:%d\n", sizeof(long));
//	printf("long long:%d\n", sizeof(long long));
//	printf("int long:%d\n", sizeof(int long));
//	printf("double:%d\n", sizeof(double));
//	printf("float:%d\n", sizeof(float));
//	return 0;
//}


//int num2 = 20;//全局变量，定义在代码块之外的变量
//int main()
//{
//	int num1 = 10;//局部变量，定义在代码块之内的变量
//	return 0;
//}

//int a = 20;
//int main()
//{
//	int a = 30;//局部变量优先
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;//只能局部使用
//	}
//	printf("%d\n", a);
//}

//int main()
//{
//	//C语言语法规定，变量要定义在代码块的最前面
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据使用输入函数scanf
//	scanf("%d%d", &num1, &num2);//&:取地址符号
//	
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

int main()
{
	extern int globel;//外部全局变量
	printf("%d", globel);
	return 0;
}