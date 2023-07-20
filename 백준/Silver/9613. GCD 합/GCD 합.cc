#include <iostream>
#include <numeric>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int A[100] = {}, T, N; long long P; cin >> T;
	for (int n = 0; n < T; n++) {
		cin >> N; P = 0;
		for (int m = 0; m < N; m++) { cin >> A[m]; }
		for (int m = 0; m < N - 1; m++) {
			for (int l = m + 1; l < N; l++) { P += gcd(A[m], A[l]); }
		}
		cout << P << '\n';
	}
	return 0;
}