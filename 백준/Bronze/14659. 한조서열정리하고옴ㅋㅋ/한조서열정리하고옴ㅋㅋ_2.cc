#include <iostream>
using namespace std;

inline bool s(int n, int m, int p[]) {
	if (p[n] > p[m]) { return 1; }
	else { return 0; }
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b = 0, c = 0; cin >> a;
	int* p = new int [a] {};
	for (int n = 0; n < a; n++) { cin >> p[n]; }
	for (int n = 0; n < a; n++) {
		for (int m = n + 1; m < a; m++) {
			if (s(n, m, p)) { c = c + 1; }
			else { break; }
		}
		if (b < c) { b = c; }c = 0;
	}
	cout << b;
	delete[]p;
	return 0;
}
