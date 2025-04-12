#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
/*
		猜数字游戏
		题目： 随机生成一个正整数(1 ~ 100) 之间
		分析： 猜大了，猜小了，知道猜对了，结束
*/

/*
*  实现 打印菜单
*/
void menu() {
	printf("*************************************\n");
	printf("*************  1. play  *************\n");
	printf("*************  0. exit  *************\n");
	printf("*************************************\n");
}

/*
*	实现 猜数字游戏
*/

void playGame() {
	//system("cls")
	int i = 0;
	int s = 3;
	int input = 0;
	int num = 0;
	// 1. 生成一个正整数(1 ~ 100) 之间	
	// 取模 100 获得 0 ~ 99 所以在加一	
	num = (rand() % 100) + 1;
	system("cls");
	// 2. 猜数字
	while (1) {
		printf("输入猜数字:>");
		scanf("%d", &input);
		if (input > num) {
			printf("\n猜大了\n\n");
		}
		else if (input < num) {
			printf("\n猜小了\n\n");
		}
		else {
			for (i = 0;i < 3;i++) {
				system("cls");
				printf("恭喜你! 猜对了\n");
				printf("%d 秒后... 可重新开始!\n",s);
				Sleep(1000);
				s--;
			}
			system("cls");
			break;
		}
	}
}
int main() {
	int index = 0;
	// 设置随机数种子  
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &index);
		switch (index) {
		case 1:
			//printf("开始游戏\n");
			playGame();
			break;
		case 0:
			printf("退出游戏\n");
			//goto exit;
			break;
		default:
			system("cls");
			printf("选择有误,重新选择\n");
			break;
		}
	} while (index);
//exit:
	return 0;
}