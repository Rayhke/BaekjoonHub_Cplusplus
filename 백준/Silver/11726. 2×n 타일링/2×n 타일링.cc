#include <iostream>
using namespace std;

int main() {
	int N; int P[1001] = { 1,1,2 }; cin >> N;
	for (int n = 3; n < 1001; n++) { P[n] = (P[n - 1] + P[n - 2]) % 10007; }
	cout << P[N];
	return 0;
}