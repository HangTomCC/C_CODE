#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;//32 - 4;64 - 8:ָ����32λƽ̨��4��64��8��ָ���С����һ��
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%d\n", sizeof(pd));
//	return 0;
//}


//����һ���ṹ������
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "c����",55 };
//	strcpy_s(b1.name, "Java");
//	printf("���� ��%s\n �۸� ��%d\n", b1.name,b1.price);
//	struct Book* pb = &b1;
//	//.: �ṹ�����.��Ա
//	//->:�ṹ��ָ�� -> ��Ա
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb -> name);
//	printf("%d\n", pb -> price);
//	return 0;
//}

//int main()
//{
//	;//��һ�������
//	printf("������");
//	int age = 15;
//	if (age<18)
//	{
//		printf("δ����");
//	}
//	else if (18 <= age && age < 28)
//	{
//		printf("����");
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
//	else//û�����ţ��ͽ�ԭ��
//		printf("haha\n"); 
//	return 0;
//	}

//int main()
//{
//	int a = 0;
//	//if (a = 1)//С���ⲻ���жϣ����Ǹ�ֵ
//	if(1 == a)//��������д����������
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 2; i++)
//	{
//		int num1 = 0;
//		printf("������һ����\n");
//		scanf("%d", &num1);//&:ȡ��ַ����
//		if (num1%2 == 1)
//		{
//			printf("�����Ϊ����\n");
//		}
//		else
//		{
//			printf("�����Ϊż��\n");
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
//	//����ţ��
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
//	switch (day)//day����������
//	{
//	case 1://���ͳ������ʽ
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	}
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("��Ϣ��\n");
//		break;//�������һ������
//	default:
//		printf("�������\n");
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
