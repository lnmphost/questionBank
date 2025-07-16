#include "game.h"
/*
	����ӹ���
	1����ǹ���
	2��չ��һƬ����
*/
void menu() {
	printf("*******************************\n");
	printf("*******     1��play     *******\n");
	printf("*******     0��exit     *******\n");
	printf("*******************************\n");
}
void playGame() {
	char mine[ROWS][COLS] = { 0 };	// ��Ų��úõ�����Ϣ
	char show[ROWS][COLS] = { 0 }; // ����Ų���׵���Ϣ
	// ��ʼ����������Ϊָ������
	// mine ������û�в����׵�ʱ�� ���� '0'    
	// mine  '1' ��ʾ ��������
	initBoard(mine,ROWS,COLS,'0');	
	// ������
	setMine(mine, ROW, COL);
	// show ������û�г�ʼ����ʱ�� ���� '*'
	initBoard(show,ROWS,COLS,'*');

	//disPlayBoard(mine,ROW,COL);
	disPlayBoard(show,ROW,COL);
	// �Ų���
	findMine(mine,show,ROW,COL);
}

int main() {
	// �������������
	srand((unsigned)time(NULL));
	int input = 0;
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			playGame();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			system("cls");
			printf("ѡ��������������\n");
			break;
		}
	} while (input);
	return 0;
}