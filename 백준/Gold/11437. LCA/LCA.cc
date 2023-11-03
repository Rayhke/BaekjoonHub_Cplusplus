#include <iostream>
#include <vector>
#define US unsigned short
using namespace std;

bool R[50001];
US N, M;
pair <US, US> w[50001];
vector <US> v[50001];

void D(int X, int Y) {
	R[X] = 1; w[X].second = Y;
	for (const auto& n : v[X]) {
		if (R[n]) { continue; }
		w[n].first = X; D(n, Y + 1);
	}
}

int LCA(int N1, int N2) {
	if (N1 == N2) { return N1; }
	if (w[N1].second == w[N2].second) { return LCA(w[N1].first, w[N2].first); }
	else if (w[N1].second > w[N2].second) { return LCA(w[N1].first, N2); }
	else { return LCA(N1, w[N2].first); }
}

int main() {
	ios::sync_with_stdio(false);
	US x, y; cin >> N;
	for (int n = 0; n < N - 1; n++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	D(1, 0);
	cin >> M;
	for (int m = 0; m < M; m++) {
		cin >> x >> y; cout << LCA(x, y) << '\n';
	}
	return 0;
}
/* ■ 설명 ■
깊이 우선 탐색(DFS)로 탐색 하면서, 깊이(가중치 비용)랑
이전 발자취(부모 노드)를 남겨주면 된다.


cout << "\n\n";
	for (int n = 1; n <= N; n++) {
		cout << "[노드 '" << n << "번' 정보] : " << w[n].first << " / " << w[n].second << '\n';
		for (const auto& m : v[n]) {
			cout << "다음 노드 : " << m << '\n';
		}
		cout << '\n';
	}
cout << "\n\n";
*/
