#include <iostream>
using namespace std;

int main() {
	int a[9][9] = {}, b = 0, c = 0, d = 0;
	for (int n = 0; n < 9; n++) {
		for (int m = 0; m < 9; m++) {
			cin >> a[n][m];
			if (a[n][m] > b) {
				b = a[n][m]; c = n; d = m;
			}
		}
	}
	cout << b << "\n" << (c + 1) << " " << (d + 1);		// 단순히 'c + 1' 이렇게 하지 말고 괄호 쳐서 정확하게 지시해라.
	return 0;
}
/* ■ 설명 ■
2차원 배열에서 가장 큰 값을 찾아서
행렬 값도 출력하라.
*/
