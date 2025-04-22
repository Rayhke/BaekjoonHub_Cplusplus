#include <iostream>
using namespace std;

int A[100000], Min = 1e9, Index = 1;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, X; cin >> N >> X;
	for (int n = 0; n < N; n++) { cin >> A[n]; }
	for (int n = 1; n < N; n++) {
		if (Min > A[n - 1] + A[n]) {
			Min = A[n - 1] + A[n];
			Index = n;
		}
	}
	cout << (A[Index - 1] + A[Index]) * X;
	return 0;
}