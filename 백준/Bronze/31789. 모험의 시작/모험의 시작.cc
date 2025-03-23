#include <iostream>
using namespace std;

int main() {
	bool R = 0; int N, X, S, C, P; cin >> N >> X >> S;
	while (N--) {
		cin >> C >> P;
		if (X < C || P <= S) { continue; }
		R = 1;
	}
	cout << (R ? "YES" : "NO");
	return 0;
}