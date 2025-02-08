#include <iostream>
using namespace std;

bool Use[200001];

int main() {
	bool R = 0; int N, In, Max = 0; cin >> N;
	while (N--) {
		cin >> In; Use[In] = 1;
		Max = max(In, Max);
	}
	for (int n = 1; n <= Max; n++) {
		if (!Use[n] || n + 6 > Max) { continue; }
		if (Use[n] && Use[n + 3] && Use[n + 6]) { R = 1; }
	}
	cout << (R ? "Yes" : "No");
	return 0;
}