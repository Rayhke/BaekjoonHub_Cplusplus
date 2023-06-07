#include <iostream>
using namespace std;

inline int p(int a) { return a - 5; }
inline int q(int a) { return a - 3; }
inline int r(int a) { return a / 5; }
inline int w(int a) { return a % 5; }

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b = 0, c, d, e;
	cin >> a;
	if (w(a) == 0) { cout << r(a); return 0; }
	while (a > 2) {
		if (a == 12) { b = b + 4; a = 0; break; }
		else if (a == 9) { b = b + a / 3; a = 0; break; }
		else if (a == 8) { b = b + 2; a = 0; break; }
		else if (a == 7) { break; }
		else if (a == 6) { b = b + 2; a = 0; break; }
		else if (a == 5) { b = b + 1; a = 0; break; }
		else if (a == 4) { break; }
		else if (a == 3) { b = b + 1; a = 0; break; }
		else if (a > 4) { a = p(a); if (a > -1) { b = b + 1; } }
		else if (a > 2) { a = q(a); if (a > -1) { b = b + 1; } }
	}
	if (a == 0) { cout << b; }
	else if (a != 0) { cout << -1; }
	return 0;
}