#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;

int W[26];
pair<int, int> w[26];
vector <int> v[26];
queue <int> q;

void V() {
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (const auto& n : v[X]) {
			if (W[n] < W[X] + w[n].second) { W[n] = W[X] + w[n].second; }
			if (--w[n].first == 0) { q.push(n); }
		}
	}
}

int main() {
	char C; int N, M; string S, P;
	while (getline(cin, S)) {
		istringstream iss(S); P = "";
		iss >> C >> N >> P; M = C - 65;
		w[M].second = N;
		for (int n = 0; n < P.length(); n++) {
			v[P[n] - 65].push_back(M); w[M].first++;
		}
	}
	for (int n = 0; n < 26; n++) {
		if (w[n].first == 0) { W[n] = w[n].second; q.push(n); }
	}
	V(); M = 0;
	for (int n = 0; n < 26; n++) { M = max(W[n], M); }
	cout << M;
	return 0;
}