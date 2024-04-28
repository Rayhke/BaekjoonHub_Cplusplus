#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M, P[1001], Min = 1, Max = 0, Value; cin >> N >> M;
	for (int m = 0; m < M; m++) { cin >> P[m]; }
	sort(P, P + M, greater<int>());
	Value = P[0];
	for (int m = 1; m < M; m++) {
		if (m >= N) { break; }
		Value = P[m] * (m + 1);
		if (Max <= Value) { Max = Value; Min = P[m]; }
	}
	cout << Min << ' ' << Max;
	return 0;
}
/* ■ 설명 ■
1. 
*/
