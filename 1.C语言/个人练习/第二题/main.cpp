#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
/*
	题目：编写代码，演示多个字符从两端移动，向中间汇聚
	解析：可以定义两个相等的字符串，用一个字符串中的值去替换另一个字符串中的值
*/
int main() {
	string str1 = "welcome to C++!!!!";
	string str2 = "##################";

	int left = 0;						// 定义字符串 开始下标
	int right = str1.size() - 1;		// 定义字符串 最后坐标

	while (left <= right) {
		str2[left] = str1[left];
		str2[right] = str1[right];
		cout << str2 << endl;
		Sleep(1000);					// 睡眠 1 秒	(这里使用Windows 平台库)
		system("cls");					// 清空屏幕 
		left++;
		right--;
	}
	cout << str2 << endl;
	return 0;
}