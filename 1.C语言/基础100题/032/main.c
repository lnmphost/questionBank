/*
32.ɾ��һ���ַ����е�ָ����ĸ

��Ŀ��ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��

����������ޡ�
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * deleteCharacters(char * str, char * charSet)
{
	int hash [256];
	int i = 0;
	int currentIndex = 0;
	if(NULL == charSet)
		return str;

	for (i = 0; i < 256; i++)
	{
		hash[i] = 0;
	}
	for(i = 0; i < strlen(charSet);i++)
	{
		hash[charSet[i]] = 1;
	}

	for(i = 0; i < strlen(str);i++)
	{
		if(!hash[str[i]])
		{
			str[currentIndex++] = str[i];
		}
	}

	str[currentIndex] = '\0';

	return str;
}


int main()
{
	char s[2] = "a";					// Ҫɾ������ĸ
	char s2[5] = "aca";				// Ŀ���ַ���
	printf("%s\n",deleteCharacters(s2,s));

	system("pause");
	return 0;
}