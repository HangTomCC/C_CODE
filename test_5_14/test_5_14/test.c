//从大到小排序，辗转相除，素数，乘法表

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	else if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	else if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d\n%d\n%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i;
//	int con;
//	for ( i = 1; i <= 100; i++)
//	{
//		con = i % 3;
//		if (con == 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int con = 0;;
//	printf("请输入两个数\n");
//	scanf("%d%d", &a, &b);
//	if (a%b==0)
//	{
//		printf("最大公约数为%d", b);
//	}
//	else
//	{
//		while (con = a % b)
//		{
//			//con = a % b;
//			a = b;
//			b = con;
//		}
//		printf("最大公约数为%d", b);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		//判断vear是否为闰年
//		// 1.能被4整除并且不能被100整除是闰年
//		//2．能被400整除是闰年
//		/*if (year%4==0 && year%100 !=0)
//		{
//			printf("闰年为:%d\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("400一闰年为:%d\n", year);
//			count++;
//		}*/
//
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("闰年为:%d\n", year);
//			count++;
//		}
//		
//	}
//	printf("一共有:%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	// sqrt 开平方的数学厍函数
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法： 产生2---->i-1
//		int j = 0;
//		for ( j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j ==0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("一共有:%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i %10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("一共有:%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double count = 0.0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		count += 1.0/ i - 1.0 / (i + 1.0);
//	}
//	printf("结果:%lf\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double count = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i ++)
//	{
//		count += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("结果:%lf\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sum = sizeof(arr) / sizeof(0);
//	int max = arr[0];
//	printf("请输入10个数字\n");
//	for (i = 1; i < sum; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("结果:%d\n", max);
//	return 0;                        
//}

//int main()
//{
//	int i = 0;
//	//打印9行
//	for ( i = 1; i < 10; i++)
//	{
//		int j = 1;
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdlib.h>
#include <time.h>
//void game()
//{
//	//生成一个随机数 1 - 100
//	int ret = 0;
//	int guess = 0;
//	
//	ret = rand()%100 + 1;
//	//printf("%d\n",ret);
//	//猜数字
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("***************************************\n");
//	printf("*****    1.play       0.exit     ******\n");
//	printf("***************************************\n");
//}
//int main()
//{
//	//拿时间戳来设置随机数的生成起点
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("马上关机，输入我是猪，则取消\n");
//	scanf("%s", input);
//	if (strcmp(input,"我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("马上关机，输入我是猪，则取消\n");
	while (1)
	{
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("马上关机，输入我是猪，则取消\n");
		}
	}
	
	return 0;
}