#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	题目： 在一个有序数组中查找具体的某个数字n。
	解析：二分查找(折半查找)
*/
int main() {
	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int left = 0;
	int right = (sizeof(nums) / sizeof(nums[0])) - 1;

	while (left <= right) {
		//int mid = (left + right) / 2;
		int mid = left + (right - left) / 2;		// 解决数组越界。
		if (nums[mid] < k) {
			left = mid + 1;
		}
		else if (nums[mid] > k) {
			right = mid - 1;
		}
		else {
			printf("恭喜你！找多了...\n下标是: %d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("找不到\n");
	}
	return 0;
}