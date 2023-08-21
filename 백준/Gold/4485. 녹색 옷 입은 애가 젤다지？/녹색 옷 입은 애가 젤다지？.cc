#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, U = 1e9, P = 1, v[125][125], A[] = { 1,-1,0,0 }, B[] = { 0,0,1,-1 };


void V() {
	vector <vector<int>> w(N, vector <int>(N, U)); w[0][0] = v[0][0];
	queue <pair<int, int>> q; q.push({ 0,0 });
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + A[n], Y = y + B[n];
			if (-1 < X && X < N && -1 < Y && Y < N) {
				if (w[Y][X] > v[Y][X] + w[y][x]) {
					w[Y][X] = v[Y][X] + w[y][x]; q.push({ X,Y });
				}
			}
		}
	}
	cout << "Problem " << P << ": " << w[N - 1][N - 1] << '\n'; P++;
}

int main() {
	ios::sync_with_stdio(false);
	while (1) {
		cin >> N; if (N == 0) { break; }
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < N; m++) { cin >> v[n][m]; }
		}
		V();
	}
	return 0;
}
/* ■ 설명 ■
priority_queue<pair<int,pair<int, int>>>pq; 이러한 구조로 쓸 수 있는 방법도 있다..;
*/
