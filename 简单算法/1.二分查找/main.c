#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	��Ŀ�� ��һ�����������в��Ҿ����ĳ������n��
	���������ֲ���(�۰����)
*/
int main() {
	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int left = 0;
	int right = (sizeof(nums) / sizeof(nums[0])) - 1;

	while (left <= right) {
		//int mid = (left + right) / 2;
		int mid = left + (right - left) / 2;		// �������Խ�硣
		if (nums[mid] < k) {
			left = mid + 1;
		}
		else if (nums[mid] > k) {
			right = mid - 1;
		}
		else {
			printf("��ϲ�㣡�Ҷ���...\n�±���: %d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("�Ҳ���\n");
	}
	return 0;
}