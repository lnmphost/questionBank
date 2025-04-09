#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n = 0;
	// 使用 float  double 都可以, 读取时注意: float 使用 %f、double 使用 %lf
	// sum 总分  score 输入分数 max 最大分数 min 最小分数 avg 平均分
	float sum = 0.0f, score = 0.0f, max = -1, min = 101, avg = 0.0f;
	cin >> n;
	int m = n;
	while (n--) {
		cin >> score;
		sum += score;					// 得到总分
		if (score > max)max = score;	// 得到最高分
		if (score < min)min = score;	// 得到最低分
	}
	avg = sum / m;						// 得到平均分
	cout << fixed << setprecision(2) << max << " " << min << " " << avg;
	return 0;
}