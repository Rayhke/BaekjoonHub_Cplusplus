#include <iostream>
#include <vector>
using namespace std;

bool r[10001];
int N, M, P = 0;
vector <short> R;
vector <pair<short, int>> v[10001];

void W(int S) {
	if (v[S].size() < 2) { R.push_back(S); }
	r[S] = 1;
	for (const auto& n : v[S]) {
		if (!r[n.first]) { W(n.first); }
	}
	r[S] = 0;
}

void V(int S, int C) {
	if (v[S].size() < 2 && S != M) { P = max(P, C); return; }
	r[S] = 1;
	for (const auto& n : v[S]) {
		if (!r[n.first]) { V(n.first, C + n.second); }
	}
	r[S] = 0;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int x, y, z; cin >> N;
	for (int n = 0; n < N - 1; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ y,z });
		v[y].push_back({ x,z });
	}
	W(1);
	for (const auto& n : R) { M = n; V(n, 0); }
	cout << P;
	return 0;
}