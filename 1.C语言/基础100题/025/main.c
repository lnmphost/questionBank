/*
25.��1-20�׳˵ĺ�

��Ŀ����1+2!+3!+...+20!�ĺ͡�

����������˳���ֻ�ǰ��ۼӱ�����۳ˡ�
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	long double sum = 0.0l, mix = 1.0l;

	for (i = 1; i <= 20; i++)
	{
		mix = mix * i;
		sum = sum + mix;
	}

	printf("%Lf\n",sum);

	system("pause");
	return 0;
}