#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	for (int n = 0; n < a; n++) {
		b = n; c = n;
		while (c != 0) {
			b += c % 10;		          // 최종적으로 ' 10 ' 으로 나눌 수 없는, 유일하게 일의 자리만 남음
			c /= 10;
		}
		if (a == b) { cout << n; return 0; }
	}
	cout << 0;
	return 0;
}

/* 또는 이런 방법도 있다.*/

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d = 0;
	cin >> a;
	for (int n = 0; n < a; n++) {
		b = n; c = n;
		while (c != 0) {
			b += c % 10;		          // 최종적으로 ' 10 ' 으로 나눌 수 없는, 유일하게 일의 자리만 남음
			c /= 10;
		}
		if (a == b) { d = n; break; }
	}
	cout << d;
	return 0;
}
