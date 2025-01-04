#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	bool R = 0; long long D, In; cin >> D;
	while (cin >> In) {
		if (R) { continue; }
		if (D > In) { D += In; }
		else { R = 1; }
	}
	cout << D;
	return 0;
}