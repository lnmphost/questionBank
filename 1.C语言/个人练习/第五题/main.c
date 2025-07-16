#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
/*
*	题目：
*	写一个函数判断一个数是不是素数，找出100 ~ 200 之间的素数。
*	
*	分析：
*	偶数不是素数
* 	里使用 sqrt(num) 是为了减少不必要的检查。若一个数 num 不是素数，
	那么它必定存在一个小于或等于 sqrt()的因子。
*/

int is_prime(int num) {
	int i = 0;
	// 素数 是大于1 的，且只能被1 和 他自身整除，所以从2开始检查
	int limit = (int)sqrt(num);
	for (i = 2;i <= limit;i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int i = 0;
	// 偶数不是素数
	for (i = 101;i <= 200; i+=2) {
		if (is_prime(i)) {
			printf("%d 是素数\n", i);
		}
	}
	return 0;
}