#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;//32 - 4;64 - 8:指针在32位平台是4；64是8，指针大小类型一样
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%d\n", sizeof(pd));
//	return 0;
//}


//创建一个结构体类型
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = { "c语言",55 };
//	strcpy_s(b1.name, "Java");
//	printf("书名 ；%s\n 价格 ；%d\n", b1.name,b1.price);
//	struct Book* pb = &b1;
//	//.: 结构体变量.成员
//	//->:结构体指针 -> 成员
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb -> name);
//	printf("%d\n", pb -> price);
//	return 0;
//}

//int main()
//{
//	;//是一条空语句
//	printf("请输入");
//	int age = 15;
//	if (age<18)
//	{
//		printf("未成年");
//	}
//	else if (18 <= age && age < 28)
//	{
//		printf("青年");
//	}
//	return 0;
//}

//int main()
//   {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else//没大括号，就近原则
//		printf("haha\n"); 
//	return 0;
//	}

//int main()
//{
//	int a = 0;
//	//if (a = 1)//小心这不是判断，而是赋值
//	if(1 == a)//建议这样写，报错明显
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 2; i++)
//	{
//		int num1 = 0;
//		printf("请输入一个数\n");
//		scanf("%d", &num1);//&:取地址符号
//		if (num1%2 == 1)
//		{
//			printf("这个数为奇数\n");
//		}
//		else
//		{
//			printf("这个数为偶数\n");
//		}
//	}
//	
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i%2 == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	//这种牛逼
//	for (int i = 1; i <= 100; i+=2)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day必须是整型
//	{
//	case 1://整型常量表达式
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	}
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//		printf("工作日\n");
//		break;
//	case 5:
//		printf("休息日\n");
//		break;//建议最后一个加上
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("i=%d\n",i);
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl + z
	//EOF =end of file -> -1
	while (ch = getchar() != EOF)
	{
		putchar(ch);
	}
	return 0;
}
