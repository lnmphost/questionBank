/*
10.打印楼梯，同时在楼梯上方打印两个笑脸

题目：打印楼梯，同时在楼梯上方打印两个笑脸。

程序分析：Linux下用11来表示两个笑脸；用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = 0;
	printf("11\n");			// 输出11 来表示两个笑脸

	for (i = 1; i < 11; i++)
	{
		for (j = 1;j <= i; j++)
		{
			printf("%c%c",70,70);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}