/*
39.�Զ���һ��������������ŵ�����,��ԭ��������

��Ŀ����һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�

��������������жϴ����Ƿ�������һ����,Ȼ���ٿ��ǲ����м���������,������Ԫ��֮�����,���κ���һ��λ�á�
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[11] = {1,4,6,9,13,16,19,28,40,100};
	int temp1 = 0, temp2 = 0, number = 0, end = 0, i = 0, j = 0;

	printf("ԭʼ�����ǣ�\n");

	for (i = 0;i < 10;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n����һ���µ����֣�");
	scanf("%d",&number);

	end = a[9];

	if(number > end)
	{
		a[10] = number;
	}
	else
	{
		for (i = 0;i < 10;i++)
		{
			if(a[i] > number)
			{
				temp1 = a[i];
				a[i] = number;
				for(j = i + 1;j < 11;j++)
				{
					temp2 = a[j];
					a[j] = temp1;
					temp1 = temp2;
				}
				break;
			}
		}
	}

	for(i = 0;i < 11;i++)
	{
		printf("%4d",a[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}