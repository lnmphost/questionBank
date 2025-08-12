/*
34.练习函数调用

题目：练习函数调用。

程序分析：无。
*/


#include <stdio.h>
#include <stdlib.h>

void hello_world()
{
	printf("Hello world!\n");
}

void three_hellos()
{
	int i = 0;
	for(i = 1; i <= 3; i++)
	{
		hello_world();				// 调用打印 hello world 函数
	}
}

int main()
{
	// 调用循环3次
	three_hellos();

	system("pause");
	return 0;
}