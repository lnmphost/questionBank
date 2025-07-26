/*
5.给自定义的3个整数有小到大输出

题目：输入三个整数x,y,z，请把这三个数由小到大输出。

程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 0, y = 0, z = 0, t = 0;

	printf("请输入三个数字:\n");
	scanf("%d %d %d",&x ,&y ,&z);

	if (x > y)			// 交换 x，y 的值
	{
		t = x;
		x = y;
		y = t;
	}
	if (x >z)				// 交换x，z 的值
	{
		t = z;
		z = x;
		x = t;
	}
	if ( y > z)			// 交换z，y 的值
	{
		t = y;
		y = z;
		z = t;
	}

	printf("从小到大排序: %d %d %d\n",x,y,z);

	system("pause");
	return 0;
}

