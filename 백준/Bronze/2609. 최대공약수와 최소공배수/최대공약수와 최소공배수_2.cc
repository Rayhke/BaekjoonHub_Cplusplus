#include <iostream> 
using namespace std;

int main() {
	int a, b, c, d = 0, n = 0, m = 0;
	cin >> a >> b;
	c = (a > b) ? a : b;
	while (1) {
		d++;
		if ((a % d) == 0 && (b % d) == 0) n = d;
		else if (d == c + 1) break;
	}
	d = 0;
	while (1) {
		d++;
		if ((d % a) == 0 && (d % b) == 0) {
			m = d; break;
		}
	}
	cout << n << "\n" << m;
	return 0;
} /* ■ 설명 ■
문제를 푼 거 까진 좋으나, 매개변수 기능을 활용하여 풀 것
*/
