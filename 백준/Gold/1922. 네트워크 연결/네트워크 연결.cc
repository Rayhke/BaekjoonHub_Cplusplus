#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, v[1001];
vector <pair<int, pair<int, int>>> w;

int find(int n) {
	if (n != v[n]) { v[n] = find(v[n]); }
	return v[n];
}

void V() {
	int P = 0;
	for (const auto n : w) {
		int X = n.second.first, Y = n.second.second, Z = n.first, S = find(X), E = find(Y);
		if (S == E) { continue; }
		v[E] = S; P += Z;
	}
	cout << P;
}

int main() {
	ios::sync_with_stdio(false);
	int x, y, z; cin >> N >> M;
	for (int n = 1; n <= N; n++) { v[n] = n; }
	for (int n = 0; n < M; n++) {
		cin >> x >> y >> z;
		w.push_back({ z,{x,y} });
	}
	sort(w.begin(), w.end());
	V();
	return 0;
}