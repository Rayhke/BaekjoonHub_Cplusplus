#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, K, a, b, c;
	cin >> N >> K;
	int* s = new int[N];
	for (int n = 0; n < N; n++) { s[n] = n + 1; }
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < K - 1; m++) {
			a = s[n];
			for (int l = n; l < N - 1; l++) { s[l] = s[l + 1]; }
			s[N - 1] = a;
		}
	}
	cout << "<";
	for (int n = 0; n < N; n++) { cout << s[n]; if ((N - 1) - n) { cout << ", "; } }
	cout << ">";
	return 0;
}