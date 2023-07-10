#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int T, P[3]; cin >> T;
	for (int n = 1; n <= T; n++) {
		cin >> P[0] >> P[1] >> P[2];
		sort(P, P + 3);
		cout << "Case #" << n << ": ";
		if (pow(P[0], 2) + pow(P[1], 2) == pow(P[2], 2)) { cout << "YES\n"; }
		else { cout << "NO\n"; }
	}
	return 0;
}