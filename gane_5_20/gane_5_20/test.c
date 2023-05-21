#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include"game.h"

void game()
{
	//雷的信息存储
	//1.布置好雷的信息
	char mine[ROWS][COLS] = { 0 };//11 * 11
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
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
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出\n");
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