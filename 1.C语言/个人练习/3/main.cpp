#include <iostream>
#include <string.h>
using namespace std;
/*
	��Ŀ:
	��д����ʵ�֣�ģ���û���¼�龰,����ֻ�ܵ�¼���Ρ�
	��ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������Ƴ����򣩡�

	����:
	�Ƚ������ַ����Ƿ���ȣ�ʹ�� ==
*/
int main() {
	int i = 0;
	string pwd = "";
	// �����������ַ�����abcdef
	for (i = 0;i < 3;i++) {
		cout << "����������:>";
		cin >> pwd;
		if (pwd == "abcdef") {
			cout << "��¼�ɹ�" << endl;
			break;
		}
	}
	if (i == 3) {
		cout << "���������������󣬳����Ƴ�" << endl;
	}
	return 0;
}