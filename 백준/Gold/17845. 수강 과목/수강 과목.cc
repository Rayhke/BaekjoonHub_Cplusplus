#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector <pair<int, int>> v;

void P() {
	vector <int> w(N + 1, 0);
	for (int n = 0; n < K; n++) {
		for (int m = N; m >= v[n].second; m--) {
			w[m] = max(w[m], w[m - v[n].second] + v[n].first);
		}
	}
	cout << w[N];
}

int main() {
	int I, T; cin >> N >> K;
	for (int n = 0; n < K; n++) {
		cin >> I >> T;
		v.push_back({ I,T });
	}
	P();
	return 0;
}