/*
26.递归求5的阶乘

题目：利用递归方法求5!。

程序分析：递归公式：fn=fn_1*4!
*/

#include <stdio.h>
#include <stdlib.h>

int fact(int j)
{
	int sum = 0;
	if(j == 0)
	{
		sum = 1;
	}
	else
	{
		sum = j * fact(j - 1);
	}

	return sum;
}


int main()
{
	int i = 0;
	
	for(i = 0;i < 6;i++)
	{
		printf("%d != %d\n",i,fact(i));
	}
	system("pause");
	return 0;
}