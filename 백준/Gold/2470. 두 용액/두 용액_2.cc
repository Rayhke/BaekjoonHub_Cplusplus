#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void V(vector <int> v, int N) {
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
	int N; cin >> N; vector <int> v(N);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end()); V(v, N);
	return 0;
}
