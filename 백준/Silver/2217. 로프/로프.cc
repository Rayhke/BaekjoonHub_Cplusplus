#include <iostream>
#include <algorithm>
using namespace std;

inline int s(int a, int p[], int n) { return (p[n] * (a - n)); }

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b = 0; cin >> a;
	int* p = new int[a] {};
	for (int n = 0; n < a; n++) { cin >> p[n]; }
	sort(p, p + a);
	for (int n = 0; n < a; n++) {
		if (b < s(a, p, n)) { b = s(a, p, n); }
	}
	cout << b;
	delete[]p;
	return 0;
}
/* ■ 설명 ■

*/
