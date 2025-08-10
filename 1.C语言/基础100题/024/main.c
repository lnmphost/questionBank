/*
24.求分数序列前20项之和

题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

程序分析：请抓住分子与分母的变化规律。
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