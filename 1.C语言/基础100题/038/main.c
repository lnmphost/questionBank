/*
38.�Զ���һ��3*3������Խ���Ԫ��֮��

��Ŀ����һ��3*3����Խ���Ԫ��֮��

�������������˫��forѭ�����������ά���飬�ٽ�a[i][i]�ۼӺ������
*/

#include <stdio.h>
#include <stdlib.h>
#define N 3

int main()
{
	int a[N][N],i = 0, j = 0,sum = 0;

	printf("���������3 * 3����\n");

	for (i = 0; i < N;i++)
	{
		for(j = 0; j < N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for (i = 0; i < N;i++)
	{
		sum += a[i][i];
	}
	printf("�Խ���֮��Ϊ��%d\n",sum);

	system("pause");
	return 0;
}