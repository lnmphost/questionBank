#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
/*
	��Ŀ:
	��д����ʵ�֣�ģ���û���¼�龰,����ֻ�ܵ�¼���Ρ�
	��ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������Ƴ����򣩡�

	����:
	�Ƚ������ַ����Ƿ���ȣ�����ʹ�� == ��
	��Ӧ��ʹ��һ���⺯����strcmp �������ֵ�ǣ�0����ʾ2���ַ�����ȡ�
*/
int main() {
	int i = 0;
	char pwd[20] = { 0 };
	// �����������ַ���: abcdef
	for (i = 0;i < 3; i++) {
		printf("����������:>");
		scanf("%s", pwd);
		if (strcmp(pwd, "abcdef") == 0) {
			printf("��¼�ɹ�\n");
			break;
		}
	}
	if (i == 3) {
		printf("����������������,�����˳�\n");
	}
	return 0;
}