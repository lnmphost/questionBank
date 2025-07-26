/*
8.输出九九乘法表

题目：输出9*9口诀。

程序分析：分行与列考虑，共 9 行 9 列，i 控制行，j 控制列。
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = 0, result = 0;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d * %d = %-3d", j, i, result);		// -3d 表示左对齐， 占3位
		}
		printf("\n");												// 每一行后换行
	}
	system("pause");
	return 0;
}