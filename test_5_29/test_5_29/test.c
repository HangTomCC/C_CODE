#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//������ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[5];
//}s1,s2,s3;//����ȫ�ֵĽṹ�����

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1 = {"����",20,"1875889655","��"};
//	Stu s2 = { "����",20,"1875889655","Ů" };;
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double b;
//};
//struct T
//{
//	char ch[20];
//	struct S s;
//	char *pc;
//	double b;
//};
//int main()
//{
//	struct T t = { "hh",{100,"w","1875889655",3.14},NULL,1.0 };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	return 0;
//}

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "����",20,"1875889655","��" };
//	//��ӡ�ṹ������
//	Print1(s);
//	//��ѡ
//	Print2(&s);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}