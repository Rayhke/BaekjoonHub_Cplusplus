#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <bool> r(1001, 1); r[1] = 0;
	int N, M, P = 0; cin >> N;
	for (int n = 2; n * n < 1001; n++) {
		if (r[n]) { for (int m = n * n; m < 1001; m += n) { r[m] = 0; } }
	}
	for (int n = 0; n < N; n++) { cin >> M; if (r[M]) { P++; } }
	cout << P;
	return 0;
}
/* ■ 설명 ■
전의 방식과 달리 '에라토스테네스의 체' 알고리즘을 활용하여 효율적으로 바꾸었다.
*/
