#define _CRT_SECURE_NO_WARNINGS
//std - ��׼
//i - input
//o - output

//���д��룺fn+ctrl+f5

#include <stdio.h>
//C���Դ�����һ��Ҫ��main������������
//��׼��������д��
// 
//main���������ڣ�����ֻ��һ��
//int main()
//{
//	printf("hhhhh");//printf���⺯����������ӡ����
//	return 0;
//}

//char��int
//short int : ������
//long ��������
//int main()
//{
//	char ch = 'A';
//	int age = 20;
//	long n = 100;
//	float f = 1.2;
//	double d = 3.14;
//	printf("%c\n", ch);//%c:��ӡ�ַ���ʽ������
//	printf("%d\n", age);//%d: ��ӡ����ʮ��������
//	printf("%d\n", n);
//	printf("%f\n", f);//%f: ��ӡ������
//	printf("%lf\n", d);//%lf: ��ӡ˫���ȸ�����
//	return 0;
//}

//�鿴�������͵Ŀռ�
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


//int num2 = 20;//ȫ�ֱ����������ڴ����֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ������������ڴ����֮�ڵı���
//	return 0;
//}

//int a = 20;
//int main()
//{
//	int a = 30;//�ֲ���������
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;//ֻ�ֲܾ�ʹ��
//	}
//	printf("%d\n", a);
//}

//int main()
//{
//	//C�����﷨�涨������Ҫ�����ڴ�������ǰ��
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������ʹ�����뺯��scanf
//	scanf("%d%d", &num1, &num2);//&:ȡ��ַ����
//	
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

int main()
{
	extern int globel;//�ⲿȫ�ֱ���
	printf("%d", globel);
	return 0;
}