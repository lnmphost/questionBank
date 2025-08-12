/*
31.从头输入星期的字母,判断是周几

题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char i, j;

	printf("请输入第一个字母：\n");
	scanf("%c",&i);
	getchar();									//scanf("%c",&i);的问题，第二次是读入的一个换行符，而不是输入的字符，因此需要加一个 getchar() 吃掉换行符

	switch(i)
	{
	case 'm':
		printf("monday (星期一)\n");
		break;
	case 'w':
		printf("wednesday (星期三)\n");
		break;
	case 'f':
		printf("friday (星期五)\n");
		break;
	case 't':
		printf("请输入下一个字母：\n");
		scanf("%c",&j);
		if(j == 'u')
		{
			printf("tuesdya (星期二)\n");
			break;
		}
		if(j == 'h')
		{
			printf("thursdya (星期四)\n");
			break;
		}
	case 's':
		printf("请输入下一个字母：\n");
		scanf("%c",&j);
		if(j == 'a')
		{
			printf("saturday (星期六)\n");
			break;
		}
		if(j == 'u')
		{
			printf("sunday (星期天)\n");
			break;
		}
	default :
		printf("error！ (输入错误！)\n");
		break;
	}
	system("pause");
	return 0;
}