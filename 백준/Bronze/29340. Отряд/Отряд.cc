#include <iostream>
using namespace std;

int main() {
	int N, M; string A, B; cin >> A >> B;
	for (int n = 0; n < A.length(); n++) {
		N = A[n] - 48; M = B[n] - 48;
		cout << max(N, M);
	}
	return 0;
}