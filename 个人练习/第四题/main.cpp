#include <iostream>
#include <windows.h>
#include <random>
using namespace std;
/*
		猜数字游戏
		题目： 随机生成一个正整数(1 ~ 100) 之间
		分析： 猜大了，猜小了，知道猜对了，结束
*/

/*
*  实现 打印菜单
*/
void menu() {
	cout << "*************************************" << endl;
	cout << "*************  1. play  *************" << endl;
	cout << "*************  2. exit  *************" << endl;
	cout << "*************************************" << endl;
}
/*
*	实现 猜数字游戏
*/
void playGame(int num) {
	int input = 0;
	int s = 3;
	system("cls");
	while (true) {
		cout << "请输入猜测数字:>";
		cin >> input;
		if (input > num) {
			cout << endl << "猜大了" << endl << endl;
		}
		else if (input < num) {
			cout << endl << "猜小了" << endl << endl;
		}
		else {
			for (int i = 0;i < 3;i++) {
				system("cls");
				cout << "恭喜你! 猜对了" << endl;
				cout << s << " 秒后... 重新游戏" << endl;
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
	int ru = 0;
	// 创建一个随机数种子
	random_device rd;
	// 1. 随机生成一个(1 ~ 100) 之间的正整数
	// 创建了一个梅森旋转算法的随机数引擎，并使用 rd() 作为种子。
	mt19937 gen(rd());
	// 定义随机数的分布范围,这里是(1 ~ 100);
	uniform_int_distribution<> dis(1, 100);
	do {
		menu();
		cout << "请选择:>" ;
		cin >> index;
		switch (index) {
		case 1:
			// 生成一个随机数
			ru = dis(gen);
			playGame(ru);
			break;
		case 2:
			cout << "退出游戏" << endl;
			goto exit;
			//break;
		default:
			system("cls");
			cout << "选择错误!重新选择" << endl;
			break;
		}
	} while (index);
exit:
	return 0;
}