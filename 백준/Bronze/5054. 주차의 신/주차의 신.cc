#include <iostream>
using namespace std;

int main() {
	int T, N, In, Max, Min; cin >> T;
	while (T--) {
		cin >> N; Max = -1e9; Min = 1e9;
		while (N--) {
			cin >> In;
			Max = max(In, Max);
			Min = min(In, Min);
		}
		cout << (Max - Min) * 2 << '\n';
	}
	return 0;
}