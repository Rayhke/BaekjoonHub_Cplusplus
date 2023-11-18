#include <iostream>
#include <vector>
#include <queue>
#define Pair pair <int, short>
using namespace std;

short N, C;
int D, U = 1e9, w[10001];
vector <Pair> v[10001];
priority_queue <Pair, vector<Pair>, greater<Pair>> pq;

void V() {
	short A = 0; int B = 0;
	while (!pq.empty()) {
		int X = pq.top().second, S = pq.top().first; pq.pop();
		if (w[X] < S) { continue; }
		for (const auto& n : v[X]) {
			int Y = n.second, P = n.first;
			if (w[Y] > w[X] + P) { w[Y] = w[X] + P; pq.push({ w[Y],Y }); }
		}
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] != U) { A++; B = max(B, w[n]); }
	}
	cout << A << ' ' << B << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	short T, x, y, z; cin >> T;
	while (T--) {
		cin >> N >> D >> C;
		for (int d = 0; d < D; d++) {
			cin >> x >> y >> z;
			v[y].push_back({ z,x });
		}
		fill_n(w, N + 1, U); w[C] = 0;
		pq.push({ 0,C }); V();
		for (int n = 1; n <= N; n++) { v[n] = vector <Pair>(); }
	}
	return 0;
}
/* ■ 설명 ■
한방향 기준으로 문제 해결

출발 지점을 매 순간 초기화해주지 않는다면
19번째 줄인 ' w[Y] > w[X] + P ' 에서 문제가 생긴다.
*/
