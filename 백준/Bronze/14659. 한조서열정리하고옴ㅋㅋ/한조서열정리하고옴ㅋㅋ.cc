#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int v[30000], N, H = 0, M = 0, V = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	for (int n = 0; n < N; n++) {
		if (V) { V--; continue; }
		for (int m = n + 1; m < N; m++) {
			if (v[n] > v[m]) { H++; V++; }
			else { break; }
		}
		M = (H > M) ? H : M; H = 0;
	}
	cout << M;
	return 0;
}
/* ■ 설명 ■

*/
