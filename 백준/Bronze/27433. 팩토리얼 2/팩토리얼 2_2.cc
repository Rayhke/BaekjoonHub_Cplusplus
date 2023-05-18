#include <iostream>
using namespace std;

int main() {
	long long a, b = 1;
	cin >> a;
	for (int n = 1; n <= a; n++) b = b * n;
	if (b > 0) cout << b;
	else cout << "1";
	return 0;
}
/* ■ 설명 ■
재귀 함수 기능을 사용하지 않고 단순하게 구현하기
*/
