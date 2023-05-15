#include <iostream>
using namespace std;

int main() {
	int a[100][100] = {}, b[100][100] = {}, n, m;
	cin >> n >> m;
	for (int c = 0; c < n; c++) { for (int d = 0; d < m; d++) { cin >> a[c][d]; } }
	for (int c = 0; c < n; c++) { for (int d = 0; d < m; d++) { cin >> b[c][d]; } }
	for (int c = 0; c < n; c++) {
		for (int d = 0; d < m; d++) { cout << a[c][d] + b[c][d] << " "; }
		cout << endl;
	}
	return 0;
}
/* ■ 설명 ■
2차원 배열 함수의 기능을 이용한 덧셈
행렬 순으로 행을 다 채운 후, 열을 1칸 내린 후에 이어서 값 담음
*/
