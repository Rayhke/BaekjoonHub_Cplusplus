#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	vector <long long> A(1000001); A[0] = 1; A[1] = 1; A[2] = 2;
	int T, N; cin >> T;
	for (int n = 3; n < 1000001; n++) { A[n] = (A[n - 1] + A[n - 2] + A[n - 3]) % 1000000009; }
	for (int n = 0; n < T; n++) { cin >> N; cout << A[N] << '\n'; }
	return 0;
}