#include <iostream>
#include <cmath>
using namespace std;

inline float s(int a, int b, int c) {
	if (a == -1) { return sqrt(pow(c, 2) - pow(b, 2)); }
	else if (b == -1) { return sqrt(pow(c, 2) - pow(a, 2)); }
	else { return sqrt(pow(a, 2) + pow(b, 2)); }
}

int main() {
	int a, b, c, d = 1; float e;
	do {
		cout << fixed;
		cout.precision(3);
		cin >> a >> b >> c;
		if (a + b + c != 0) {
			cout << "Triangle #" << d << '\n';
			e = s(a, b, c);
			if (e > 0) {
				if (a == -1) { cout << "a = "; }
				else if (b == -1) { cout << "b = "; }
				else { cout << "c = "; }
				cout << e << "\n\n";
			}
			else {
				cout << "Impossible.\n\n";
			}
		}
		d++;
	} while (a + b + c != 0);
	return 0;
}
/* ■ 설명 ■
[a] 높이, [b] 밑변, [c] 빗변이며
세 가지 중에 반드시 하나는 ' -1 ' 을 입력 받게 되는 데
이 경우는 모르는 값이기에 찾아야 되는 값이다.		// (a = ?) or (b = ?) or (c = ?)
그렇다면 피타고라스 정리를 이용하여 풀으면 간단하되
만약 성립하지 않는 다면, "Impossible." 를 출력한다.
=====================================================
[오답 원인]

백준 기준으로 출력 후 뒤에 "\n\n" 인 경우도 있다.
*/
