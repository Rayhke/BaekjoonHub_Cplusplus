#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, C[1000], Now, Value = 0; string D; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> D >> C[n];
		if (D == "jinju") { Now = C[n]; }
	}
	cout << Now << '\n'; sort(C, C + N);
	for (int n = 0; n < N; n++) {
		if (Now < C[n]) { Value = N - n; break; }
	}
	cout << Value;
	return 0;
}