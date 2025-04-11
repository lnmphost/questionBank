#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	题目：
	接受一个正整数，按照顺序输出它的每一位

	分析：
	1234  输出 1 2 3 4
*/
// 递归实现
void print(unsigned int n) {
	if (n > 9) {			
		print(n / 10);		// 取 除 最后一位前面
	}
	printf("%d ", n % 10);	// 取余 就是最后一位
}
int main() {

	unsigned int num = 0;
	printf("请输入一个正整数:>");
	scanf("%u" ,& num);
	print(num);
	return 0;
}