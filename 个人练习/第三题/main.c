#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
/*
	题目:
	编写代码实现，模拟用户登录情景,并且只能登录三次。
	（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则推出程序）。

	分析:
	比较两个字符串是否相等，不能使用 == ，
	而应该使用一个库函数：strcmp 如果返回值是：0，表示2个字符串相等。
*/
int main() {
	int i = 0;
	char pwd[20] = { 0 };
	// 假设密码是字符串: abcdef
	for (i = 0;i < 3; i++) {
		printf("请输入密码:>");
		scanf("%s", pwd);
		if (strcmp(pwd, "abcdef") == 0) {
			printf("登录成功\n");
			break;
		}
	}
	if (i == 3) {
		printf("三次密码均输入错误,程序退出\n");
	}
	return 0;
}