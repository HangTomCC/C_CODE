#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//scanf��C�����ṩ�ģ�scanf_s���Ǳ�׼C�����ṩ�ģ�VS�������ṩ��
//	int sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//���泣��
//	3;
//	3.14;
//
//	//const : ������
//	const int n = 10//n�Ǳ������������г�����
//
//
//	//const���εĳ��������ɱ� 
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//		return 0;
//}

//#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//ö�ٳ���
//ö�ٹؼ��֣�enum
//enum Sex
//{
//	//ö�ٳ���
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
//	//�����ڼ�����ϴ洢���õ��Ƕ�����
//	// a - 97
//	// A - 65
//	// ASCII����
//	//"abc" -- 'a' 'b' 'c' '\0'
//	//'\0':�ַ����Ľ�����־
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
//	//strlen: string length �ַ�������
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//\t: ˮƽ�Ʊ����
//	//printf("c:\\test\\32\\test.c");
//	//printf("%c\n",'\'');
//	printf("%s\n", "\"\"");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c", '\32');
//	//\32 - �����˽������֣���ʾһ���ַ�
//	//32 -- > 8�������� 26 -- > ��ΪASCII��ֵ������ַ�: "->"
//	//32ת���˽��ƣ�
//	//3*8^1 + 2*8^0 = 26
//
//	printf("%c", '\x61');
//	//61ת��16�������֣�
//	//6*16^1 + 1*16^0 = 97
//	//97��ΪASCII��ֵ������ַ�: "a"
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("��Ҫ�ú�ѧϰ�𣿣�1/0��");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("����һ�����õ�δ��\n");
//		}
//		else if (input == 1)
//		{
//			printf("������\n");
//		}
//		else
//		{
//			printf("������1/0\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line<100)
//	{
//		printf("��:%d\n",line);
//		line++;
//	}
//	if (line>=100)
//	{
//		printf("����");
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
//	//printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ�أ� arr[�±�]
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
//	//�ƣ������ƣ�λ������
//	int a = 1;
//	//����1ռ�ĸ��ֽ� - 32bitλ
//	//00000000000000000000000000000001
//	int b = a << 2;//�����ƶ���λ
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//(�����ƣ�λ����
//	//& ��λ��
//	//| ��λ��
//	//^ ��λ���
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//001 = 0
//	int d = a | b;//111 = 7
//	//���ļ������
//	//��Ӧ�Ķ�����λ��ͬ����Ϊ0
//	//��Ӧ�Ķ�����λ��ͬ����Ϊ1
//	int e = a ^ b;//110 = 6
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//=����ֵ��==���ж����
//	//���ϸ�ֵ��
//	// += -= *= /= ...
//	a = a + 10;
//	a += 10;
//	return 0;
//}

//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	int a = 10;
//	int b = 0;
//	//a + b;//+:˫Ŀ������
//	printf("%d\n", a);
//	//C���������Ǳ�ʾ���
//	//0 - ��
//	//��0 - ��
//	printf("%d\n", !a);
//	printf("%d\n", !b);
//	return 0;
//}

int main()
{
	int a = 10;
	int arr[10] = { 0 };
	//sizeof������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof arr);
	//��������Ԫ�ظ���
	//���� = �����ܴ�С / ÿ��Ԫ�صĴ�С
	int num = sizeof arr / sizeof arr[0];
	printf("%d\n", num);
	return 0;
}