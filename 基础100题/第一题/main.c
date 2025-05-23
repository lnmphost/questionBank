#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
	生成不重复的三位数
	题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

	分析：可填在百位、十位、个位的数字都是1、2、3、4.组成所有的排列后再去掉不满足条件的排列。
*/
int main() {
	int i = 0, j = 0, k = 0;
	// 三重循环嵌套 ，实现生成三个数字
	for (i = 1;i < 5;i++) {
		for (j = 1;j < 5;j++) {
			for (k = 1;k < 5;k++) {
				// 确保i，j，k 三位互不相同
				if (i != j && i != k && j != k) {
					printf("%d,%d,%d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}