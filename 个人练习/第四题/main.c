#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
/*
		��������Ϸ
		��Ŀ�� �������һ��������(1 ~ 100) ֮��
		������ �´��ˣ���С�ˣ�֪���¶��ˣ�����
*/

/*
*  ʵ�� ��ӡ�˵�
*/
void menu() {
	printf("*************************************\n");
	printf("*************  1. play  *************\n");
	printf("*************  0. exit  *************\n");
	printf("*************************************\n");
}

/*
*	ʵ�� ��������Ϸ
*/

void playGame() {
	//system("cls")
	int i = 0;
	int s = 3;
	int input = 0;
	int num = 0;
	// 1. ����һ��������(1 ~ 100) ֮��	
	// ȡģ 100 ��� 0 ~ 99 �����ڼ�һ	
	num = (rand() % 100) + 1;
	system("cls");
	// 2. ������
	while (1) {
		printf("���������:>");
		scanf("%d", &input);
		if (input > num) {
			printf("\n�´���\n\n");
		}
		else if (input < num) {
			printf("\n��С��\n\n");
		}
		else {
			for (i = 0;i < 3;i++) {
				system("cls");
				printf("��ϲ��! �¶���\n");
				printf("%d ���... �����¿�ʼ!\n",s);
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
	// �������������  
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &index);
		switch (index) {
		case 1:
			//printf("��ʼ��Ϸ\n");
			playGame();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			//goto exit;
			break;
		default:
			system("cls");
			printf("ѡ������,����ѡ��\n");
			break;
		}
	} while (index);
//exit:
	return 0;
}