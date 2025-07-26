#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	题目：求第n个斐波那契数。

	分析：
	1,1,2,3,5,8,13,21....，
	有 F(n)=F(n−1)+F(n−2)。也就是说，从第三项开始，每一项都等于前两项之和。
*/

// 递归
//int Fib(int n) {
//	if (n > 3) {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else {
//		return 1;
//	}
//}

// 迭代
int Fib(int n) {
	int a = 1;
	int b = 1;
	int c = 0;
	while (n > 3) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main() {
	int num = 0;
	scanf("%d", &num);
	int ret = Fib(num);
	printf("%d\n", ret);
	return 0;
}