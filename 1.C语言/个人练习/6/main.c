#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	��Ŀ��
	��ӡ1000 ~ 2000 ��֮�������

	������
	1.�ܱ�4���������Ҳ��ܱ�100����������
	2.�ܲ�400����������
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
		// �ж��ǲ�������
		if (is_leapYear(year)) {
			printf("%d ", year);
		}
	}
	return 0;
}