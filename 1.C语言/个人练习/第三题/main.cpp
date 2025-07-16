#include <iostream>
#include <string.h>
using namespace std;
/*
	题目:
	编写代码实现，模拟用户登录情景,并且只能登录三次。
	（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则推出程序）。

	分析:
	比较两个字符串是否相等，使用 ==
*/
int main() {
	int i = 0;
	string pwd = "";
	// 假设密码是字符串：abcdef
	for (i = 0;i < 3;i++) {
		cout << "请输入密码:>";
		cin >> pwd;
		if (pwd == "abcdef") {
			cout << "登录成功" << endl;
			break;
		}
	}
	if (i == 3) {
		cout << "三次密码均输入错误，程序推出" << endl;
	}
	return 0;
}