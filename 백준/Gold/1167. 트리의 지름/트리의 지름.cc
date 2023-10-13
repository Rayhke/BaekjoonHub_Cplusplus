#include <iostream>
#include <vector>
using namespace std;

bool r[100001];
int N, M, P = 0;
vector <pair<int, int>> v[100001];

void V(int S, int C) {
	if (P < C) { P = C; M = S; }
	r[S] = 1;
	for (const auto& n : v[S]) {
		if (!r[n.first]) { V(n.first, C + n.second); }
	}
	r[S] = 0;
}

int main() {
	ios::sync_with_stdio(false);
	int x, y, z; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> x;
		while (1) {
			cin >> y;
			if (y == -1) { break; }
			cin >> z;
			v[x].push_back({ y,z });
		}
	}
	V(1, 0); V(M, 0);
	cout << P;
	return 0;
}