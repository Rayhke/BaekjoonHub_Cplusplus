#include <iostream>
using namespace std;

int main() {
	int K, N, M, A[100], B[100], Count = 0; cin >> K >> N;
	for (int n = 0; n < N; n++) { cin >> A[n]; }
	cin >> M;
	for (int m = 0; m < M; m++) { cin >> B[m]; }
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (A[n] + K == B[m]) { Count++; }
		}
	}
	cout << Count;
	return 0;
}