//�Ӵ�С����շת������������˷���

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������������");
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
//	printf("������������\n");
//	scanf("%d%d", &a, &b);
//	if (a%b==0)
//	{
//		printf("���Լ��Ϊ%d", b);
//	}
//	else
//	{
//		while (con = a % b)
//		{
//			//con = a % b;
//			a = b;
//			b = con;
//		}
//		printf("���Լ��Ϊ%d", b);
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
//		//�ж�vear�Ƿ�Ϊ����
//		// 1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2���ܱ�400����������
//		/*if (year%4==0 && year%100 !=0)
//		{
//			printf("����Ϊ:%d\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("400һ����Ϊ:%d\n", year);
//			count++;
//		}*/
//
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("����Ϊ:%d\n", year);
//			count++;
//		}
//		
//	}
//	printf("һ����:%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	// sqrt ��ƽ������ѧ�Ǻ���
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ����� ����2---->i-1
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
//	printf("һ����:%d\n", count);
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
//	printf("һ����:%d\n", count);
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
//	printf("���:%lf\n", count);
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
//	printf("���:%lf\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sum = sizeof(arr) / sizeof(0);
//	int max = arr[0];
//	printf("������10������\n");
//	for (i = 1; i < sum; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("���:%d\n", max);
//	return 0;                        
//}

//int main()
//{
//	int i = 0;
//	//��ӡ9��
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
//	//����һ������� 1 - 100
//	int ret = 0;
//	int guess = 0;
//	
//	ret = rand()%100 + 1;
//	//printf("%d\n",ret);
//	//������
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ\n");
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
//	//��ʱ�����������������������
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("������\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	printf("���Ϲػ���������������ȡ��\n");
//	scanf("%s", input);
//	if (strcmp(input,"������") == 0)
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
	printf("���Ϲػ���������������ȡ��\n");
	while (1)
	{
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("���Ϲػ���������������ȡ��\n");
		}
	}
	
	return 0;
}