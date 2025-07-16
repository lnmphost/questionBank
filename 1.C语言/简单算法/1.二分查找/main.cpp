#include <iostream>
#include <array>
using namespace std;
/*
	题目： 在一个有序数组中查找具体的某个数字n。
	解析：二分查找(折半查找)
*/
int main() {
	array<int, 10> nums = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int left = 0;
	int right = nums.size();
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] < k) {
			left = mid + 1;
		}
		else if (nums[mid] > k) {
			right = mid - 1;
		}
		else {
			cout << "恭喜你! 找到了..." << endl;
			cout << "下标是: " << mid << endl;
			break;
		}
	}
	if (left > right) {
		cout << "找不到\n" << endl;
	}
	return 0;
}