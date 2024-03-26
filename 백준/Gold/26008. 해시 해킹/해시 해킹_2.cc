#include <iostream>
#define LL long long
using namespace std;

long long N, M, A, H, P = 1, U = 1e9 + 7;

void Backtracking(LL count, LL sum) {
	if (count == N) { P += sum % M % U; return; }
	for (int a = 0; a <= A; a++) {
		Backtracking(count + 1, (sum + a) % U);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> M >> A >> H; N--;
	Backtracking(0, 0);
	cout << P;
	return 0;
}
/* ■ 설명 ■
문제 대응 솔루션은 나쁘지 않았으나, 시간 초과로 실패

[참조]
https://velog.io/@huthut_kwon/%EB%B0%B1%EC%A4%80-26008%EB%B2%88-%ED%95%B4%EC%8B%9C-%ED%95%B4%ED%82%B9-v6di6eyz
*/
