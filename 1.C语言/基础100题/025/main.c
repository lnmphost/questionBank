/*
25.求1-20阶乘的和

题目：求1+2!+3!+...+20!的和。

程序分析：此程序只是把累加变成了累乘。
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