#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int w[1001];
vector <int> v[1001];
queue <int> p, q;

void V() {
	while (!q.empty()) {
		int X = q.front(); q.pop(); p.push(X);
		for (const auto& n : v[X]) {
			if (--w[n] == 0) { q.push(n); }
		}
	}
}

int main() {
	int N, M, L, Fi, Ne; cin >> N >> M;
	while (M--) {
		cin >> L >> Fi;
		for (int l = 1; l < L; l++) {
			cin >> Ne; w[Ne]++;
			v[Fi].push_back(Ne); Fi = Ne;
		}
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] == 0) { q.push(n); }
	}
	V();
	if (p.size() == N) {
		while (!p.empty()) { cout << p.front() << '\n'; p.pop(); }
	}
	else { cout << 0; }
}
/* ■ 설명 ■
위상 정렬을 시행함과 동시에 사이클이 나오는 경우를 고려해야 하며
사이클이 존재한다면 ' 0 ' 을 출력한다.

' w[n] == 0 ' 인 경우를 만났을 때마다,
1. ' V() ' 를 시행한 것과
2. ' q ' 에 집어넣은 후에 ' V() ' 를 시행한 것과

이 차이는 무엇인가? 분석하라.
*/
