/*
7.�������ͼ��

��Ŀ���������ͼ��������c���������У���һ����Very Beautiful!

����������ַ�����256������ͬ�ַ���ͼ�β�һ����
          ע��: ������Linux�����¸�a��ֵ32,b��ֵ33,
		��Windows�����¸�a��ֵ176,b��ֵ219
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char a = 32,b=33;
  printf("%c%c%c%c%c\n",b,a,a,a,b);
  printf("%c%c%c%c%c\n",a,b,a,b,a);
  printf("%c%c%c%c%c\n",a,a,b,a,a);
  printf("%c%c%c%c%c\n",a,b,a,b,a);
  printf("%c%c%c%c%c\n",b,a,a,a,b);

  system("pause");
  return 0;
}
