#include <iostream>
#include <array>
using namespace std;
/*
	��Ŀ�� ��һ�����������в��Ҿ����ĳ������n��
	���������ֲ���(�۰����)
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
			cout << "��ϲ��! �ҵ���..." << endl;
			cout << "�±���: " << mid << endl;
			break;
		}
	}
	if (left > right) {
		cout << "�Ҳ���\n" << endl;
	}
	return 0;
}