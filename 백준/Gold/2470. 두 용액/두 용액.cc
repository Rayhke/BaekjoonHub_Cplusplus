#include <iostream>
#include <algorithm>
using namespace std;

int v[100000];

void V(int N) {
	int mn = 0, mx = N - 1, mn_sum = abs(v[mx] + v[mn]), sum;
	for (int L = 0, R = N - 1; L < R;) {
		sum = v[L] + v[R];
		if (abs(sum) < mn_sum) {
			mn_sum = abs(sum);
			mn = L; mx = R;
		}
		if (sum < 0) { L++; }
		else if (sum > 0) { R--; }
		else { break; }
	}
	cout << v[mn] << ' ' << v[mx];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N; cin >> N;
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v, v + N); V(N);
	return 0;
}