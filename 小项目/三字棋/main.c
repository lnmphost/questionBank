#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
/*
*	打印菜单
*/
void memu() {
	printf("*********************************\n");
	printf("*********  1、play  *************\n");
	printf("*********  0、exit  *************\n");
	printf("*********************************\n");
}

void playGame() {
	
	char ret = 0;
	// 定义一个二维数组用来显示棋盘
	char board[ROW][COL] = { 0 };
	initBoard(board,ROW,COL);
	drawnBoard(board, ROW, COL);
	while (1) {
		playerMove(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		drawnBoard(board, ROW, COL);
		AiMove(board,ROW,COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		drawnBoard(board, ROW, COL);
	}
	drawnBoard(board, ROW, COL);
	if (ret == '*') {
		printf("玩家赢了\n");
	}
	else if (ret == '#') {
		printf("电脑赢了\n");
	}
	else {
		printf("游戏平局!!!\n");
	}
}
int main() {

	// 设置随机数种子
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		memu();
		printf("请选择:>");
		scanf("%d", &input);
		printf("\n");
		switch (input) {
		case 1:
			//printf("开始游戏\n");
			playGame();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			system("cls");
			printf("选择有误！重新选择\n");
			break;
		}
	} while (input);
	return 0;
}