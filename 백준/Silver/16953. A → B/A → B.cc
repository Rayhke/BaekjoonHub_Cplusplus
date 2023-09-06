#include <iostream>
#include <queue>
using namespace std;

int main() {
	bool R = 1; int A, B, U = 1e9 + 1; cin >> A >> B;
	queue <pair<long long, int>> q; q.push({ A,1 });
	while (!q.empty()) {
		int P = q.front().second; long long X = q.front().first; q.pop();
		if (X > B) { continue; }
		if (X == B) { cout << P; R = 0; break; }
		if (X * 2 < U) { q.push({ X * 2,P + 1 }); }
		if (X * 10 + 1 < U) { q.push({ X * 10 + 1,P + 1 }); }
	}
	if (R) { cout << -1; }
	return 0;
}
/* ■ 설명 ■
[오답 원인]
문제 조건 기준으로 입력 받는 데이터 값이 ' int ' 타입을 초과하는 문제점과
9번 째 줄의 ' X ' 의 값을 ' long long ' 타입으로 고쳐야 하는 것을 늦게 발견함..
*/
