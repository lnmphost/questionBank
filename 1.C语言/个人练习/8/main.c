#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	��Ŀ��
	��д��������������ʱ���������ַ����ĳ��ȡ�
	������
	���ַ����ĳ��ȣ�ģ��ʵ�� strlen
*/
// �ݹ��
// my_strlen("abc")
// 1+my_strlen("bc")
// 1+1+my_strlen("c")
// 1+1+1+my_strlen("")
// 1+1+1+0

// str + 1 �ַ���ָ�������
// ����ָ��ӷ����㡣�� C �����У���ָ����мӷ����������ʱ��
// ������������ָ����ָ����������͵Ĵ�С������ƫ������

int my_strlen(char* str) {
	if (*str != '\0') {
		return 1 + my_strlen(str + 1);	
	}
	else {
		return 0;
	}
}
int main() {

	char str[] = "abc";
	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}