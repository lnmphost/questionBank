#include <iostream>
#include <windows.h>
#include <random>
using namespace std;
/*
		��������Ϸ
		��Ŀ�� �������һ��������(1 ~ 100) ֮��
		������ �´��ˣ���С�ˣ�֪���¶��ˣ�����
*/

/*
*  ʵ�� ��ӡ�˵�
*/
void menu() {
	cout << "*************************************" << endl;
	cout << "*************  1. play  *************" << endl;
	cout << "*************  2. exit  *************" << endl;
	cout << "*************************************" << endl;
}
/*
*	ʵ�� ��������Ϸ
*/
void playGame(int num) {
	int input = 0;
	int s = 3;
	system("cls");
	while (true) {
		cout << "������²�����:>";
		cin >> input;
		if (input > num) {
			cout << endl << "�´���" << endl << endl;
		}
		else if (input < num) {
			cout << endl << "��С��" << endl << endl;
		}
		else {
			for (int i = 0;i < 3;i++) {
				system("cls");
				cout << "��ϲ��! �¶���" << endl;
				cout << s << " ���... ������Ϸ" << endl;
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
	// ����һ�����������
	random_device rd;
	// 1. �������һ��(1 ~ 100) ֮���������
	// ������һ��÷ɭ��ת�㷨����������棬��ʹ�� rd() ��Ϊ���ӡ�
	mt19937 gen(rd());
	// ����������ķֲ���Χ,������(1 ~ 100);
	uniform_int_distribution<> dis(1, 100);
	do {
		menu();
		cout << "��ѡ��:>" ;
		cin >> index;
		switch (index) {
		case 1:
			// ����һ�������
			ru = dis(gen);
			playGame(ru);
			break;
		case 2:
			cout << "�˳���Ϸ" << endl;
			goto exit;
			//break;
		default:
			system("cls");
			cout << "ѡ�����!����ѡ��" << endl;
			break;
		}
	} while (index);
exit:
	return 0;
}