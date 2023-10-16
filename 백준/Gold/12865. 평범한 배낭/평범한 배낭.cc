#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector <pair<int, int>> v;

void P() {
	vector <int> w(K + 1, 0);
	for (int n = 0; n < N; n++) {
		for (int m = K; m >= v[n].first; m--) {
			w[m] = max(w[m], w[m - v[n].first] + v[n].second);
		}
	}
	cout << w[K];
}

int main() {
	int W, V; cin >> N >> K;
	for (int n = 0; n < N; n++) {
		cin >> W >> V;
		v.push_back({ W,V });
	}
	P();
	return 0;
}