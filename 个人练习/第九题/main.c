#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
		��Ŀ��
		��׳�
		������
		n *(n-1)
*/

// �ݹ�ʵ��

// ���Ƽ�ʹ�á�����һ��������� �����ջ�������

//int fac(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else {
//		return n * fac(n - 1);
//	}
//}

// �����ķ�ʽ �ǵݹ�
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
	printf("������һ����:>");
	scanf("%d",&num);
	int ret = fac(num);
	printf("%d", ret);
	return 0;
}