#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	��Ŀ��
	����1/1 - 1/2 + 1/3 - 1/4 + 1/5 ...    + 1/99 - 1/100��ֵ��������
	������
	��������1 ����ĸ�� 1 ~ 100

*/
int main() {
	int i = 0;
	double sum = 0;
	int flag = 1;						// ��¼�������

	for (i = 1;i <= 100;i++) {
		sum = sum + flag * (1.0 / i);	// ע�����ﲻ�����������������һ����Ҫ��С��
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}