#include "game.h"

void initBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++) {
		for (j = 0;j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
void drawnBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;

	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			printf(" %c ", board[i][j]);
			if (j < row - 1) {
				printf("|");
			}	
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0;j < row;j++) {
				printf("---");
				if (j < row - 1) {
					printf("|");
				}	
			}
			printf("\n");
		}
	}
}
void playerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("\n请玩家走棋，输入坐标:>");
		scanf("%d %d", &x, &y);
		printf("\n");
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x-1][y-1] == ' ') {
				board[x-1][y-1] = '*';
				break;
			}
			else {
				printf("\n该位置已经有棋子，请重新输入\n\n");
			}
		}
		else {
			printf("\n输入坐标非法！重新输入\n\n");
		}
	}
}

void AiMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("\n电脑走棋\n\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
	
}


int isFull(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}


char isWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	// 行
	for (i = 0;i < row;i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
			return board[i][1];
		}
	}
	// 列
	for (j = 0;j < col;j++) {
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] != ' ') {
			return board[1][j];
		}
	}
	// 对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[1][1];
	}
	// 没人赢 平局
	if (isFull(board, row, col)) {
		return 'Q';
	}

	// 继续
	return 'C';
}