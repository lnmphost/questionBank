/*
34.��ϰ��������

��Ŀ����ϰ�������á�

����������ޡ�
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
		hello_world();				// ���ô�ӡ hello world ����
	}
}

int main()
{
	// ����ѭ��3��
	three_hellos();

	system("pause");
	return 0;
}