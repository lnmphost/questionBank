/*
35.�ַ�����ת

��Ŀ���ַ�����ת���罫�ַ��� "www.freecplus.net" ��תΪ "ten.sulpceerf.www"��

����������ޡ�
*/


#include <stdio.h>
#include <stdlib.h>

void reverse(char * s)
{
	// ��ȡ�ַ�������
	int i = 0;
	char c;
	int len = 0;
	char * p = s;
	while (*p != 0)
	{
		len++;
		p++;
	}

	// ����
	while(i <= len / 2 - 1)
	{
		c = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = c;
		i++;
	}
}


int main()
{
	char s[] = "www.freecplus.net";			// �����ַ���
	printf(" '%s' =>",s);
	reverse(s);											// ��ת�ַ���
	printf(" '%s'\n",s);
	system("pause");
	return 0;
}