/*
18.�Զ�����̿������

��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�

����������ؼ��Ǽ����ÿһ���ֵ��
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int s = 0, a = 0, n = 0, t = 0;

	printf("������ a �� n��\n");
	scanf("%d %d",&a,&n);

	t = a;

	while (n > 0)
	{
		s += t;
		a = a * 10;
		t += a;
		n--;
	}
	printf("a+aa+...=%d\n",s);

	system("pause");
	return 0;
}