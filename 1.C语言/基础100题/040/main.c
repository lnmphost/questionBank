/*
40.�������һ������

��Ŀ����һ���������������

����������õ�һ�������һ��������
*/


#include <stdio.h>
#include <stdlib.h>
#define N 10


int main()
{
	int a[N] = {0,1,2,3,4,5,6,7,8,9};
	int i = 0, t = 0;

	printf("ԭʼ�����ǣ�\n");

	for(i = 0;i < N;i++)
	{
		printf("%d ",a[i]);
	}
	for(i = 0;i < N / 2;i++)
	{
		t = a[i];
		a[i] = a[N - 1 - i];
		a[N - 1 - i] = t;
	}

	printf("\n���������飺\n");

	for(i = 0;i < N;i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}