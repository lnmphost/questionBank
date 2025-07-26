#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	题目：
	打印1000 ~ 2000 年之间的闰年

	分析：
	1.能被4整除，并且不能被100整除是闰年
	2.能不400整除是闰年
*/
int is_leapYear(int y) {
	if (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int year = 0;
	for (year = 1000;year <= 2000;year++) {
		// 判断是不是闰年
		if (is_leapYear(year)) {
			printf("%d ", year);
		}
	}
	return 0;
}