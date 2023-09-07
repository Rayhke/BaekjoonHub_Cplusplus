#include <iostream>
#include <vector>
using namespace std;

vector <vector<int>> v(1025, vector<int>(1024, 0));

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, L, x1, y1, x2, y2; cin >> N >> M;
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) {
			cin >> v[n][m];
			v[n][m] += v[n - 1][m] + v[n][m - 1] - v[n - 1][m - 1];
		}
	}
	for (int n = 0; n < M; n++) {
		cin >> x1 >> y1 >> x2 >> y2;
		L = v[x2][y2] - v[x2][y1 - 1] - v[x1 - 1][y2] + v[x1 - 1][y1 - 1];
		cout << L << '\n';
	}
	return 0;
}