/*
36.��100���ڵ�����

��Ŀ����100֮�ڵ�������

���������������prime number���ֳ������������޸���һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ��������
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int i = 0, j = 0, k = 0, n = 0;

	for (i = 2; i <= 100; i++)
	{
		k = (int)sqrt(i);
		for (j = 2;j <= k;j++)
		{
			if (i % j == 0)
				break;
		}
		if(j > k)
		{
			printf("%2d ",i);
			n++;
			if (n % 5 == 0)
				printf("\n");
		}
	}

	system("pause");
	return 0;
}