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


//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
// ���� - ԭ����������ͬ
// 
//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~a;
//	//~ - ��������λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//���� --> ���룺��һ
//	//11111111111111111111111111111110
//	//���� --> ԭ�룺����λ���䣬����λȡ��
//	//10000000000000000000000000000001
//	//����λ��1������Ϊ-1
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++���ȸ�ֵ����++
//	//int b = ++a;//ǰ��++����++���ٸ�ֵ
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
//	//��-��0
//	//��-0
//	//&& - �߼���
//	//|| = �߼���
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
//	auto int a = 10;//�ֲ�/�Զ�����,autoͨ��ʡ��
//	return 0;
//}

//int main()
//{
//	register int a = 10;//�����a����ɼĴ�������
//	//int ����ı������з��ŵ� = signed int
//	//�޷��ŵ� - unsigned int
//	//struct - �ṹ��ؼ���
//	//union - �����壬������ؼ���
//	//typedef - ���Ͷ��� �����ض��� ��������
//	typedef unsigned int u_int;//��unsigned int��Ϊu_int
//	unsigned int a = 10;
//	u_int b = 10;
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static: ���ξֲ��������ֲ��������������ڱ䳤
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
//	//static: ����ȫ�ֱ������ı���ȫ�ֱ������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	extern int Add(int, int);//�����ⲿ����
//	//static: ���κ������ı��˺�����������/�������ԣ��þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//#define MAX 100;
//��Ķ���:ȡ���ֵ
//#define MAX(X,Y) (X>Y ? X:Y)
//int main()
//{
//	int sum = MAX(10, 20);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4���ֽ�
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	int* p = &a;//ȡ��ַ
//	*p = 20;//* - �����ò�����
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