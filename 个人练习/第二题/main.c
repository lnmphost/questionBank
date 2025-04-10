#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
/*
	题目：编写代码，演示多个字符从两端移动，向中间汇聚
	解析：可以定义两个相等的字符串数组，用一个字符串数组中的值去替换另一个字符串数组中的值
*/
int main() {
	char str1[] = "welocome to C!!!!";
	char str2[] = "#################";

	int left = 0;
	// int right = sizeof(str1)/sizeof(str1[0]) - 2; 原因： sizeof 会把字符串 最后的 "\0"也计算
	int right = strlen(str1) - 1;	// strlen 获取字符串的长度 

	while (left<=right) {
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s\n", str2);
		Sleep(1000);				// 睡眠 1 秒， 这里使用Windows 平台库
		system("cls");				// 清空屏幕system 是一个库函数，可以执行系统命令
		left++;
		right--;
	}
	printf("%s\n", str2);
	return 0;
}