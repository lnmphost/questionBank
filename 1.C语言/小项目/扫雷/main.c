#include "game.h"
/*
	可添加功能
	1、标记功能
	2、展开一片功能
*/
void menu() {
	printf("*******************************\n");
	printf("*******     1、play     *******\n");
	printf("*******     0、exit     *******\n");
	printf("*******************************\n");
}
void playGame() {
	char mine[ROWS][COLS] = { 0 };	// 存放布置好的雷信息
	char show[ROWS][COLS] = { 0 }; // 存放排查出雷的信息
	// 初始化数组内容为指定内容
	// mine 数组在没有布置雷的时候 都是 '0'    
	// mine  '1' 表示 有设置雷
	initBoard(mine,ROWS,COLS,'0');	
	// 设置雷
	setMine(mine, ROW, COL);
	// show 数组在没有初始化的时候 都是 '*'
	initBoard(show,ROWS,COLS,'*');

	//disPlayBoard(mine,ROW,COL);
	disPlayBoard(show,ROW,COL);
	// 排查雷
	findMine(mine,show,ROW,COL);
}

int main() {
	// 设置随机数种子
	srand((unsigned)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			playGame();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			system("cls");
			printf("选择有误！重新输入\n");
			break;
		}
	} while (input);
	return 0;
}