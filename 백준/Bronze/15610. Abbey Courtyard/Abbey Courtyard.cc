#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long a; cin >> a;
	cout << fixed;
	cout.precision(8);
	cout << sqrt(a) * 4;
	return 0;
}
/* ■ 설명 ■
[a] m² 값을 √루트로 연산한 후에,
정사각형 변의 수 ' 4 ' 만큼 곱한다.
*/
