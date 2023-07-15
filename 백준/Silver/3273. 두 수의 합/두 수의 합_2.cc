#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int S, N, M, L = 0, R, P = 0; cin >> N; R = N - 1;
	vector <int> v(N);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	cin >> M;
	while (1) {
		if (L >= R) { break; }
		S = v[L] + v[R];
		if (S < M) { L++; }
		else if (S == M) { L++; R--; P++; }
		else { R--; }
	}
	cout << P;
	return 0;
}
