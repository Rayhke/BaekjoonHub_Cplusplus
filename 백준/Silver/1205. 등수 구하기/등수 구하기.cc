#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a = -1, N, O, P;
	cin >> N >> O >> P;
	if (N == 0 && N < P) { cout << 1; return 0; }
	vector <int> v(N);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	for (int n = 0; n < N; n++) {
		if (O < v[n]) {
			if (N < P) { a = N - n + 1; }
			break;
		}
		else if (O == v[n]) {
			if (P >= N - n + 1) { a = N - n; }
			else { break; }
		}
		else { a = N - n; }
	}
	if (a > P) { cout << -1; }
	else { cout << a; }
	return 0;
}