#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b; a = a ^ b;
	cout << a;
	return 0;
}
/* ■ 설명 ■
"난 너희 둘 중 한 명만 맞힌 표적은 다 맞혔는 데,
너희 둘 다 못 맞히거나 둘다 맞힌 것은 전부 안 맞혔어."

이 뜻을 풀어 보면

[진리표]
a b / c
0 0 / 0
0 1 / 1
1 0 / 1
1 1 / 0

이 경우의 조건은 전형적인 XOR 연산이다.
*/
