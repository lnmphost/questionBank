/*
38.自定义一个3*3矩阵求对角线元素之和

题目：求一个3*3矩阵对角线元素之和

程序分析：利用双重for循环控制输入二维数组，再将a[i][i]累加后输出。
*/

#include <stdio.h>
#include <stdlib.h>
#define N 3

int main()
{
	int a[N][N],i = 0, j = 0,sum = 0;

	printf("请输入矩阵（3 * 3）：\n");

	for (i = 0; i < N;i++)
	{
		for(j = 0; j < N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for (i = 0; i < N;i++)
	{
		sum += a[i][i];
	}
	printf("对角线之和为：%d\n",sum);

	system("pause");
	return 0;
}