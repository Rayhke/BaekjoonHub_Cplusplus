#include <iostream>
#include <numeric>
using namespace std;

int main() {
	int A, B, N; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> A >> B;
		cout << gcd(A, B) << '\n';
	}
	return 0;
}