#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, A, B, Sum = 0, Max = 0; cin >> N;
	while (N--) {
		cin >> A >> B; Sum += B - A;
		Max = max(Sum, Max);
	}
	cout << Max;
	return 0;
}