#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A, B, N[4];
	for (int n = 0; n < 4; n++) { cin >> N[n]; }
	sort(N, N + 4);
	A = N[0] + N[3]; B = N[1] + N[2];
	cout << abs(A - B);
	return 0;
}