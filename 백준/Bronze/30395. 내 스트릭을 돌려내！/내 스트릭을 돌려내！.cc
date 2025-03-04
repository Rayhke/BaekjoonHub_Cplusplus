#include <iostream>
using namespace std;

int main() {
	bool R = 1; int N, P, S, Count = 0, Max = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> P;
		if (!R) { R = n > S + 1; }
		if (P) { Count++; }
		else if (R) { R = !R; S = n; }
		else {
			Max = max(Count, Max);
			Count = 0;
		}
	}
	Max = max(Count, Max);
	cout << Max;
	return 0;
}