#include <iostream>
#include <numeric>
using namespace std;

int main() {
	int a[2], b[2], c, d;
	for (int n = 0; n < 2; n++) { cin >> a[n]; }			// [a] 의 분자, 분모
	for (int n = 0; n < 2; n++) { cin >> b[n]; }			// [b] 의 분자, 분모
	c = lcm(a[1], b[1]);
	a[0] *= c / a[1]; b[0] *= c / b[1];
	d = gcd(a[0] + b[0], c);					// 합쳐진 분수가 (분자, 분모)가 더 약분할 수 있는 가, 체크
	if (d != 1) { cout << (a[0] + b[0]) / d << ' ' << c / d; }
	else { cout << a[0] + b[0] << ' ' << c; }
	return 0;
}
