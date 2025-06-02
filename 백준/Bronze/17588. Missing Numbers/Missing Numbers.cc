#include <iostream>
using namespace std;

bool Use[201];

int main() {
	bool R = 1; int N, In, Max = 0, Count = 0; cin >> N;
	while (N--) {
		cin >> In; Use[In] = 1;
		Max = max(In, Max);
	}
	for (int n = 1; n <= Max; n++) {
		if (!Use[n]) {
			cout << n << '\n'; R = 0;
		}
	}
	if (R) { cout << "good job"; }
	return 0;
}