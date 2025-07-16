#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
/*
*	��ӡ�˵�
*/
void memu() {
	printf("*********************************\n");
	printf("*********  1��play  *************\n");
	printf("*********  0��exit  *************\n");
	printf("*********************************\n");
}

void playGame() {
	
	char ret = 0;
	// ����һ����ά����������ʾ����
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
		printf("���Ӯ��\n");
	}
	else if (ret == '#') {
		printf("����Ӯ��\n");
	}
	else {
		printf("��Ϸƽ��!!!\n");
	}
}
int main() {

	// �������������
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		memu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		printf("\n");
		switch (input) {
		case 1:
			//printf("��ʼ��Ϸ\n");
			playGame();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			system("cls");
			printf("ѡ����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}