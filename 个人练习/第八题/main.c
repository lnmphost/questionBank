#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	题目：
	编写函数不允许创建临时变量，求字符串的长度。
	分析：
	求字符串的长度，模拟实现 strlen
*/
// 递归解
// my_strlen("abc")
// 1+my_strlen("bc")
// 1+1+my_strlen("c")
// 1+1+1+my_strlen("")
// 1+1+1+0

// str + 1 字符串指针向后移
// 属于指针加法运算。在 C 语言中，对指针进行加法或减法运算时，
// 编译器会依据指针所指向的数据类型的大小来调整偏移量。

int my_strlen(char* str) {
	if (*str != '\0') {
		return 1 + my_strlen(str + 1);	
	}
	else {
		return 0;
	}
}
int main() {

	char str[] = "abc";
	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}