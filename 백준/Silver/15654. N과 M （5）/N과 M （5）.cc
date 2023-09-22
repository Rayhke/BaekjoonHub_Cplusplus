#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, L[8], U;
vector <int> v;
vector <bool> r(9, 1);

void V(int W, int P) {
	if (P == M) {
		for (int n = 0; n < M; n++) { cout << L[n] << ' '; }
		cout << '\n'; return;
	}
	for (int n = W; n <= N; n++) {
		if (r[n]) {
			r[n] = 0; L[P] = v[n - 1];
			V(1, P + 1); r[n] = 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> M; 
	for (int n = 0; n < N; n++) { cin >> U; v.push_back(U); }
	sort(v.begin(), v.end()); V(1, 0);
	return 0;
}