/*
23.��ӡ����

��Ŀ����ӡ������ͼ�������Σ���

   *
  ***
 *****
*******
 *****
  ***
   *
����������Ȱ�ͼ�ηֳ���������������ǰ����һ�����ɣ�������һ�����ɣ�����˫��forѭ������һ������У��ڶ�������С�
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = 0, k = 0;

	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 2 - i; j++)
		{
			printf(" ");
		}

		for (k = 0; k <= 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for(k = 0;k <= 4 - 2 * i; k++)
		{
			printf("*");
		}

		printf("\n");
	}
	system("pause");
	return 0;
}