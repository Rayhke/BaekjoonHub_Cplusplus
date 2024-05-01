#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, K; vector<string> V(100); cin >> N;
	for (int n = 0; n < N; n++) { cin >> V[n]; }
	cin >> K;
	if (K == 1) {
		for (int n = 0; n < N; n++) { cout << V[n] << '\n'; }
	}
	else if (K == 2) {
		for (int n = 0; n < N; n++) { reverse(V[n].begin(), V[n].end()); }
		for (int n = 0; n < N; n++) { cout << V[n] << '\n'; }
	}
	else {
		for (int n = N - 1; n > -1; n--) { cout << V[n] << '\n'; }
	}
}