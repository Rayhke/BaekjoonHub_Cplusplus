#include <iostream>
using namespace std;

int main() {
	int a[10] = {}, b = 0, c = 0;
	for (int n = 0; n < 10; n++) { cin >> a[n]; }
	for (int n = 0; n < 10; n++) {
		if (a[n] + b < 100) { b += a[n]; }
		else { c = a[n] + b; break; }
	}
	if ((100 - b < c - 100) || c == 0) { cout << b; }	// 왜 굳이 c == 0 을 추가 했는 가? 그것이 핵심이다. 잘 분석해봐라
	else if (100 - b >= c - 100) { cout << c; }
	return 0;
}
