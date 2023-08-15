#include <iostream>
using namespace std;

int main() {
	int P[1001] = { 1,1,3,5 }, N; cin >> N;
	for (int n = 4; n < 1001; n++) { P[n] = (P[n - 1] + (2 * P[n - 2])) % 10007; }
	cout << P[N];
	return 0;
}