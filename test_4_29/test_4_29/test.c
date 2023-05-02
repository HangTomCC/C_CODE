#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//scanf是C语言提供的，scanf_s不是标准C语言提供的，VS编译器提供的
//	int sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//字面常量
//	3;
//	3.14;
//
//	//const : 常属性
//	const int n = 10//n是变量，但是又有常属性
//
//
//	//const修饰的常变量不可变 
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//		return 0;
//}

//#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//枚举常量
//枚举关键字：enum
//enum Sex
//{
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//int main()
//{
//	//数据在计算机上存储，用的是二进制
//	// a - 97
//	// A - 65
//	// ASCII编码
//	//"abc" -- 'a' 'b' 'c' '\0'
//	//'\0':字符串的结束标志
//	char arr1[] = "abc";
//
//	char arr2[] = { 'a','b','c' ,'\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,'\0' };
//	//strlen: string length 字符串长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//\t: 水平制表符号
//	//printf("c:\\test\\32\\test.c");
//	//printf("%c\n",'\'');
//	printf("%s\n", "\"\"");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c", '\32');
//	//\32 - 两个八进制数字，表示一个字符
//	//32 -- > 8进制数字 26 -- > 作为ASCII码值代表的字符: "->"
//	//32转换八进制：
//	//3*8^1 + 2*8^0 = 26
//
//	printf("%c", '\x61');
//	//61转换16进制数字：
//	//6*16^1 + 1*16^0 = 97
//	//97作为ASCII码值代表的字符: "a"
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("你要好好学习吗？（1/0）");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("你有一个美好的未来\n");
//		}
//		else if (input == 1)
//		{
//			printf("你完了\n");
//		}
//		else
//		{
//			printf("请输入1/0\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line<100)
//	{
//		printf("敲:%d\n",line);
//		line++;
//	}
//	if (line>=100)
//	{
//		printf("好了");
//	}
//	return 0;
//}

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
//	int num = Add(2, 3);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n", arr[4]);//下标的方式访问元素： arr[下标]
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	//char ch[20];
//	return 0;
//}

//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//移（二进制）位操作符
//	int a = 1;
//	//整型1占四个字节 - 32bit位
//	//00000000000000000000000000000001
//	int b = a << 2;//向左移动两位
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//(二进制）位操作
//	//& 按位与
//	//| 按位或
//	//^ 按位异或
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//001 = 0
//	int d = a | b;//111 = 7
//	//异或的计算规律
//	//对应的二进制位相同，则为0
//	//对应的二进制位不同，则为1
//	int e = a ^ b;//110 = 6
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//=：赋值；==：判断相等
//	//复合赋值符
//	// += -= *= /= ...
//	a = a + 10;
//	a += 10;
//	return 0;
//}

//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	int a = 10;
//	int b = 0;
//	//a + b;//+:双目操作符
//	printf("%d\n", a);
//	//C语言中我们表示真假
//	//0 - 假
//	//非0 - 真
//	printf("%d\n", !a);
//	printf("%d\n", !b);
//	return 0;
//}

int main()
{
	int a = 10;
	int arr[10] = { 0 };
	//sizeof计算的是变量/类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof arr);
	//计算数组元素个数
	//个数 = 数组总大小 / 每个元素的大小
	int num = sizeof arr / sizeof arr[0];
	printf("%d\n", num);
	return 0;
}