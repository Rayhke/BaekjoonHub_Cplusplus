#include <iostream>
using namespace std;

int main() {
	int N, M, A[100], B[100], Sum = 0; cin >> N >> M;
	for (int n = 0; n < N; n++) { cin >> A[n]; }
	for (int m = 0; m < M; m++) { cin >> B[m]; }
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			Sum += (A[n] + B[m]) * (A[n] > B[m] ? A[n] : B[m]);
		}
	}
	cout << Sum;
	return 0;
}