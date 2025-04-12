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
	printf("--------ɨ��--------\n");
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
	printf("--------ɨ��--------\n");
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
	int win = 0; // �ҵ����׵ĸ���
	int s = 3;
	while (win < row * col - MINE_COUNT) {
		printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				while (s) {
					system("cls");
					printf("������˼����ȵ����ˡ�GAME OVER������\n");
					printf("%d ����������Ϸ��\n",s);
					disPlayBoard(mine, ROW, COL);
					Sleep(1000);
					s--;
				}
				system("cls");
				break;
			}
			if(show[x][y] != 'S' && show[x][y] == '*') {
				win++;
				// ͳ�� mine �����У�x��y���� ��Χ�м�����
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
				printf("�������԰�ȫ������Ҫ�ظ�����\n");
			}
		}
		else {
			printf("�������겻�Ϸ�����������\n");
		}
	}
	if (win == row * col - MINE_COUNT) {
		while (s) {
			system("cls");
			printf("��ϲ�㣡��Ϸͨ��\n");
			printf("%d ����������Ϸ��\n", s);
			Sleep(1000);
			s--;
		}	
	}
}