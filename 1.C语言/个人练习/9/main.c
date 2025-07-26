#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
		题目：
		求阶乘
		分析：
		n *(n-1)
*/

// 递归实现

// 不推荐使用、输入一个大的数字 会出现栈溢出错误

//int fac(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else {
//		return n * fac(n - 1);
//	}
//}

// 迭代的方式 非递归
int fac(int n) {
	int i = 0;
	int ret = 1;
	for (i = 1;i <= n;i++) {
		ret *= i;				// ret = ret * i;
	}
	return ret;
}

int main() {

	int num = 0;
	printf("请输入一个数:>");
	scanf("%d",&num);
	int ret = fac(num);
	printf("%d", ret);
	return 0;
}