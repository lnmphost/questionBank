/*
17.ͳ���ַ�����

��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

�������������while���,����Ϊ������ַ���Ϊ'\n'��
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	
	 printf("������һЩ��ĸ��\n");

	 while ((c = getchar()) != '\n')
	 {
		 if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			 letters ++;
		 else if (c >= '0' && c <= '9')
			 digits ++;
		 else if (c == ' ')
			 spaces ++;
		 else
			 others ++;
	 }
	 printf("��ĸ = %d, ���� = %d, �ո� = %d, ���� = %d\n",letters, digits, spaces, others);

	system("pause");
	return 0;
}