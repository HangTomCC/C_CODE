#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include"game.h"

void game()
{
	//�׵���Ϣ�洢
	//1.���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11 * 11
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine,show, ROW, COL);
}
void menu()
{
	printf("*****************************");
	printf("*****1.play       0.exit*****");
	printf("*****************************");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}