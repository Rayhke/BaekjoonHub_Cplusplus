#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int A, D, N, M; cin >> N >> M;
	vector <int> v(N);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	for (int n = 0; n < M; n++) {
		cin >> A;
		if (binary_search(v.begin(), v.end(), A)) {
			cout << lower_bound(v.begin(), v.end(), A) - v.begin() << '\n';
		}
		else { cout << -1 << '\n'; }
	}
	return 0;
}