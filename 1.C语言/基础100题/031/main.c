/*
31.��ͷ�������ڵ���ĸ,�ж����ܼ�

��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��

�����������������ȽϺã������һ����ĸһ�������ж����������if����жϵڶ�����ĸ��
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char i, j;

	printf("�������һ����ĸ��\n");
	scanf("%c",&i);
	getchar();									//scanf("%c",&i);�����⣬�ڶ����Ƕ����һ�����з���������������ַ��������Ҫ��һ�� getchar() �Ե����з�

	switch(i)
	{
	case 'm':
		printf("monday (����һ)\n");
		break;
	case 'w':
		printf("wednesday (������)\n");
		break;
	case 'f':
		printf("friday (������)\n");
		break;
	case 't':
		printf("��������һ����ĸ��\n");
		scanf("%c",&j);
		if(j == 'u')
		{
			printf("tuesdya (���ڶ�)\n");
			break;
		}
		if(j == 'h')
		{
			printf("thursdya (������)\n");
			break;
		}
	case 's':
		printf("��������һ����ĸ��\n");
		scanf("%c",&j);
		if(j == 'a')
		{
			printf("saturday (������)\n");
			break;
		}
		if(j == 'u')
		{
			printf("sunday (������)\n");
			break;
		}
	default :
		printf("error�� (�������)\n");
		break;
	}
	system("pause");
	return 0;
}