/*
24.���������ǰ20��֮��

��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�

�����������ץס�������ĸ�ı仯���ɡ�
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i = 0, t = 0;
	float sum = 0.0f;
	float a = 2.0f, b = 1.0f;

	for (i = 1; i <= 20; i++)
	{
		sum = sum + a / b;
		t = a;
		a = a + b;
		b = t;
	}

	printf("%9.6f\n",sum);

	system("pause");
	return 0;
}