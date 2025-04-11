#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	题目：
	计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 ...    + 1/99 - 1/100的值，输出结果
	分析：
	分子总是1 、分母是 1 ~ 100

*/
int main() {
	int i = 0;
	double sum = 0;
	int flag = 1;						// 记录正负标记

	for (i = 1;i <= 100;i++) {
		sum = sum + flag * (1.0 / i);	// 注意这里不能两个整数相除，有一个数要是小数
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}