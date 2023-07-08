#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	long long a; cin >> a;
	cout << fixed << setprecision(9);
	cout << (sqrt((double)a / acos(-1)) * 2) * (acos(-1));
	return 0;
}
/* ■ 설명 ■
입력되는 데이터 값이 10^18 이므로 // 1,000,000,000,000,000,000
long long (8바이트) 를 사용하고

원의 넓이 (반지름² × π) 가 주어지며, 그것을 이용하여
원의 둘레 ((반지름 × 2) × π) 값을 구하여라.
*/
