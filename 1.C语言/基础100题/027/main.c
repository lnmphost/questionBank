/*
27.���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ����

��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

����������ޡ�
*/

#include <stdio.h>
#include <stdlib.h>

void palin(int n)
{
	char next;

	if(n <= 1)
	{
		next = getchar();
		printf("�෴˳��������\40��\40");
		putchar(next);
	}
	else
	{
		next = getchar();
		palin(n - 1);
		putchar(next);
	}
}

int main()
{
	int i = 5;
	printf("������5���ַ�\40��\40");
	palin(i);
	printf("\n");

	system("pause");
	return 0;
}