/*
4.�ж�ĳ��������һ��ĵڼ���

��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int day = 0, month = 0, year = 0, sum = 0, leap = 0;
	printf("�������ꡢ�¡��գ���ʽΪ����,��,�գ����磺2020,12,10��\n");
	// ��ʽΪ��2020,12,10
	scanf("%d,%d,%d",&year,&month,&day);

	// �ȼ���ĳ����ǰ�·ݵ�������
	switch ( month)
	{
	case 1: sum = 0; break;
	case 2: sum = 31; break;
	case 3: sum = 59; break;
	case 4: sum = 90; break;
    case 5: sum = 120; break;
    case 6: sum = 151; break;
    case 7: sum = 181; break;
    case 8: sum = 212; break;
    case 9: sum = 243; break;
    case 10: sum = 273; break;
    case 11: sum = 304; break;
    case 12: sum = 334; break;
    default: printf("�·��������!"); break;
	}

	// �ټ���ĳ�������
	sum = sum + day;

	// �ж��ǲ�������
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		leap = 1;
	else 
		leap = 0;

	// ������������·ݴ���2��������Ӧ�ü�һ��
	if ((leap == 1) && (month > 2))
		sum++;
	printf("������һ��ĵ� %d �졣\n",sum);

	system("pause");
	return 0;
}