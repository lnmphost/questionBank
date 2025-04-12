#include "game.h"

void initBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++) {
		for (j = 0;j < cols;j++) {
			board[i][j] = set;
		}
	}
}

void disPlayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	printf("--------扫雷--------\n");
	for (i = 0;i <= row;i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++) {
		printf("%d ", i);
		for (j = 1;j <= col;j++) {
			if (board[i][j] == '0' || board[i][j] == 'S') {
				printf("  ");
				//board[i][j] = ' ';
			}
			else {
				printf("%c ", board[i][j]);
			}
			//printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------扫雷--------\n");
}
void setMine(char board[ROWS][COLS], int row, int col) {
	int count = MINE_COUNT;
	int x = 0;
	int y = 0;
	while (count) {
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}

int getMineCount(char mine[ROWS][COLS],int x,int y) {
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0; // 找到非雷的个数
	int s = 3;
	while (win < row * col - MINE_COUNT) {
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				while (s) {
					system("cls");
					printf("不好意思、你踩到雷了。GAME OVER！！！\n");
					printf("%d 秒后可重新游戏！\n",s);
					disPlayBoard(mine, ROW, COL);
					Sleep(1000);
					s--;
				}
				system("cls");
				break;
			}
			if(show[x][y] != 'S' && show[x][y] == '*') {
				win++;
				// 统计 mine 数组中，x、y坐标 周围有几个雷
				int ret = getMineCount(mine,x,y);
				if (ret == 0) {
					show[x][y] = 'S';
				}
				else {
					show[x][y] = ret + '0';
				}
				system("cls");
				disPlayBoard(show, ROW, COL);
			}
			else {
				printf("此区域以安全、不需要重复输入\n");
			}
		}
		else {
			printf("输入坐标不合法！重新输入\n");
		}
	}
	if (win == row * col - MINE_COUNT) {
		while (s) {
			system("cls");
			printf("恭喜你！游戏通关\n");
			printf("%d 秒后可重新游戏！\n", s);
			Sleep(1000);
			s--;
		}	
	}
}