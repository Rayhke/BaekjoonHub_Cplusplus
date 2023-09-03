#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void V(int N, int K) {
	int U = 1e5 + 1, mn = U, mx = 0;
	vector <bool> r(U, 1);
	queue <pair<int, int>> q; q.push({ N,0 });
	while (!q.empty()) {
		int X = q.front().first, P = q.front().second; q.pop(); r[X] = 0;
		if (X == K) {
			if (mn > P) { mn = P; mx = 1; }
			else if (P == mn) { mx++; }
		}
		if (X + 1 < U && r[X + 1]) { q.push({ X + 1,P + 1 }); }
		if (X - 1 > -1 && r[X - 1]) { q.push({ X - 1,P + 1 }); }
		if (X * 2 < U && r[X * 2]) { q.push({ X * 2,P + 1 }); }
	}
	cout << mn << '\n' << mx;
}

int main() {
	int N, K; cin >> N >> K; V(N, K);
    return 0;
}