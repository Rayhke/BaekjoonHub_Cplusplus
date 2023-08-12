#include <iostream>
using namespace std;

int main() {
	int A[11] = { 1,1,2 }, T, N; cin >> T;
	for (int n = 3; n < 11; n++) { A[n] = A[n - 1] + A[n - 2] + A[n - 3]; }
	for (int n = 0; n < T; n++) { cin >> N; cout << A[N] << '\n'; }
	return 0;
}