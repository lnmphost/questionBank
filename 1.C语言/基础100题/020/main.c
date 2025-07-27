/*
20.小球自由下落

题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

程序分析：见下面注释。
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float h = 0.0f, s = 0.0f;
	int i = 0;

	h = s = 100;
	h = h / 2;				// 第一次反弹高度

	for (i = 2; i <= 10; i++)
	{
		s = s + 2 * h;
		h = h / 2;
	}
	printf("第10次落地时，共经过 %f 米，第10次反弹高 %f 米\n",s,h);

	system("pause");
	return 0;
}
