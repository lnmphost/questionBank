/*
8.����žų˷���

��Ŀ�����9*9�ھ���

����������������п��ǣ��� 9 �� 9 �У�i �����У�j �����С�
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = 0, result = 0;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d * %d = %-3d", j, i, result);		// -3d ��ʾ����룬 ռ3λ
		}
		printf("\n");												// ÿһ�к���
	}
	system("pause");
	return 0;
}