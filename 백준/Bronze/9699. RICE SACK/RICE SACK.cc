#include <iostream>
using namespace std;

int main() {
	int T, input, Max; cin >> T;
	for (int t = 1; t <= T; t++) {
		Max = 0;
		for (int n = 0; n < 5; n++) {
			cin >> input; Max = max(input, Max);
		}
		printf("Case #%d: %d\n", t, Max);
	}
	return 0;
}