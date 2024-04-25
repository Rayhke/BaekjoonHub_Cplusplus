#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
	int T, Y, K, YC, KC; cin >> T;
	while (T--) {
		YC = 0; KC = 0;
		for (int n = 0; n < 9; n++) {
			cin >> Y >> K;
			YC += Y; KC += K;
		}
		if (YC != KC) { (YC > KC) ? cout << "Yonsei\n" : cout << "Korea\n"; }
		else { cout << "Draw\n"; }
	}
	return 0;
}