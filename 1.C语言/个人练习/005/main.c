#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
/*
*	��Ŀ��
*	дһ�������ж�һ�����ǲ����������ҳ�100 ~ 200 ֮���������
*	
*	������
*	ż����������
* 	��ʹ�� sqrt(num) ��Ϊ�˼��ٲ���Ҫ�ļ�顣��һ���� num ����������
	��ô���ض�����һ��С�ڻ���� sqrt()�����ӡ�
*/

int is_prime(int num) {
	int i = 0;
	// ���� �Ǵ���1 �ģ���ֻ�ܱ�1 �� ���������������Դ�2��ʼ���
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
	// ż����������
	for (i = 101;i <= 200; i+=2) {
		if (is_prime(i)) {
			printf("%d ������\n", i);
		}
	}
	return 0;
}