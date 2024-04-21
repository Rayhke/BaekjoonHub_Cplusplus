#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	int N, count = 0; string A, B; cin >> N >> A >> B;
	for (int n = 0; n < N; n++) {
		if (A[n] != B[n]) { count++; }
	}
	cout << count;
	return 0;
}