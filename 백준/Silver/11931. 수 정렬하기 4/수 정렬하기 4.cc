#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, c = 0; cin >> a;
	int* e = new int[2000001]{}; e[1000000] = 1;
	for (int n = 0; n < a; n++) {
		cin >> b; e[1000000 + b] = b;
		if (c < 1000000 + b) { c = 1000000 + b; }
	}
	for (int n = c; n > -1; n--) {
		if (n != 1000000 && e[n] != 0) { cout << e[n] << '\n'; }
		else if (n == 1000000 && e[1000000] != 1) { cout << e[1000000] << '\n'; }
	}
	return 0;
}