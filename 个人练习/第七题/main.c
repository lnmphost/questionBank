#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	��Ŀ��
	����һ��������������˳���������ÿһλ

	������
	1234  ��� 1 2 3 4
*/
// �ݹ�ʵ��
void print(unsigned int n) {
	if (n > 9) {			
		print(n / 10);		// ȡ �� ���һλǰ��
	}
	printf("%d ", n % 10);	// ȡ�� �������һλ
}
int main() {

	unsigned int num = 0;
	printf("������һ��������:>");
	scanf("%u" ,& num);
	print(num);
	return 0;
}