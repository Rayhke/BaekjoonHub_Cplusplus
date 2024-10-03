#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, A, B, Sum1 = 1, Sum2 = 1;
	cin >> N >> A >> B;
	for (int n = 0; n < N; n++) {
		Sum1 += A; Sum2 += B;
		if (Sum1 < Sum2) { swap(Sum1, Sum2); }
		else if (Sum1 == Sum2) { Sum2--; }
	}
	cout << Sum1 << ' ' << Sum2;
	return 0;
}