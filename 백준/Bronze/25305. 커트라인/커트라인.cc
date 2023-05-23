#include <iostream>
using namespace std;

int main() {
	int s[1000] = {}, N, k, m, l, a, b, c;
	cin >> N >> k;
	for (m = 0; m < N; m++) { cin >> s[m]; }
	for (m = 0; m < N; m++) {
		a = m;
		for (l = m + 1; l < N; l++) {
			if (s[a] > s[l]) { a = l; }
		}
		b = s[m];
		s[m] = s[a];
		s[a] = b;
	}
	cout << s[N - k];
	return 0;
}