#include <iostream>
#include <vector>
#define Vec vector<int>
using namespace std;

short N, M;
int T, U = 1e9;
vector <Vec> v(301, Vec(301, U));

int main() {
	ios::sync_with_stdio(false); cout.tie(NULL);
	int x, y, z; cin >> N >> M >> T;
	for (int m = 0; m < M; m++) {
		cin >> x >> y >> z;
		if (v[x][y] > z) { v[x][y] = z; }
	}
	for (int n = 1; n <= N; n++) { v[n][n] = 0; }
	for (int m = 1; m <= N; m++) {
		for (int s = 1; s <= N; s++) {
			for (int e = 1; e <= N; e++) {
				if (v[s][e] > v[s][m] || v[s][e] > v[m][e]) {
					v[s][e] = min(v[s][e], max(v[s][m], v[m][e]));
				}
			}
		}
	}
	for (int t = 0; t < T; t++) {
		cin >> x >> y;
		if (v[x][y] != U) { cout << v[x][y] << '\n'; }
		else { cout << -1 << '\n'; }
	}
	return 0;
}
/* ■ 설명 ■
메모리: 2444 KB, 시간: 1484 ms
*/
