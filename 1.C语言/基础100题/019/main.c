/*
19.����ҳ�1000���ڵ���������

��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ�����������
*/

#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
	int i = 0, j = 0, k = 0, n = 0, sum = 0;
	int a[256];

	for (i = 2; i <= N; i++)
	{
		sum = a[0] = 1;
		k = 0;
		for (j = 2; j <= (i / 2); j++)
		{
			if (i % j == 0)
			{
				sum += j;
				a[++k] = j;
			}
		}
		if (i == sum)
		{
			printf("%d = %d",i,a[0]);
			for (n = 1; n <= k; n++)
				printf(" + %d",a[n]);
			printf("\n");
		}
	}

	system("pause");
	return 0;
}