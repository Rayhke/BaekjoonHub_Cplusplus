#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[100001];
int w[100001], W[100001], S = 1;	// 배열 구성 문제 발생
bool r[100001];

void B(int R) {
	queue <int> q; q.push(R); w[R] = S; W[R] = 0; r[R] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { S++; r[Y] = 1; w[Y] = S; W[Y] = W[X] + 1; q.push(Y); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, R, x, y; cin >> N >> M >> R;
	long long P = 0;
	for (int n = 0; n < M; n++) {
		cin >> x >> y; W[n + 1] = -1;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
	B(R); M = 0;
	for (int n = 1; n <= N; n++) {
		if (W[n] != -1) { P += ((long long)w[n] * W[n]); M++; if (M == S) { break; } }	// int * int 로 인해 타입 에러 발생
	}
	cout << P;
	return 0;
}
/* ■ 설명 ■
[오답 원인]
8번 째 줄, 34번 째 줄
*/
