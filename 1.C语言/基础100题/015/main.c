/*
15.ѧϰ�ɼ�����

��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��

���������(a>b)?a:b��������������Ļ������ӡ�
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score = 0;
	char grade;

	printf("�����������");
	scanf("%d",&score);

	grade = (score >= 90) ? 'A' :((score >= 60) ? 'B' : 'C');
	printf("%c\n",grade);

	system("pause");
	return 0;
}