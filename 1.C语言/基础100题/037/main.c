/*
37.�Զ���10������������

��Ŀ����10������������

�����������������ѡ�񷨣����Ӻ�9���ȽϹ����У�ѡ��һ����С�����һ��Ԫ�ؽ����� �´����ƣ����õڶ���Ԫ�����8�����бȽϣ������н�����
*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
	int a[N], i = 0, j = 0, temp = 0;

	printf("������ 10 �����֣�\n");

	for (i = 0;i < N;i++)
	{
		scanf("%d",&a[i]);
	}

	for (i = 0;i < N - 1;i++)
	{
		int min = i;
		for (j = i + 1;j < N;j++)
		{
			if(a[min] > a[j])
			{
				min = j;
			}
		}
		if(min != i)
		{
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}

	printf("�������ǣ�\n");

	for(i = 0;i < N;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}