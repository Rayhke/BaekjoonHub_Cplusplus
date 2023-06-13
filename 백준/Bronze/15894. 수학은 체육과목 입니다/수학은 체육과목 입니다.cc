#include <iostream>
using namespace std;

inline long long s(long long a) { return a * 4; }

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long a; cin >> a; cout << s(a);
	return 0;
}
/* ■ 설명 ■
별로 어렵지 않은 문제 였으나,
입력 받는 값의 범위를 21억이 넘는 걸 미쳐 고려하지 않고 계산한 탓에 에러가 발생

[unsigned int] 로 하거나 [long long] 으로 하던 상관 없으나,
후자의 경우 8바이트를 낭비 하므로 아깝다.
*/
