#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

void V(int N, int K) {
	int U = 1e5 + 1, R = K;
	stack <int> s; s.push(K); vector <int> v(U, -1);
	queue <pair<int, int>> q; q.push({ N,0 });
	while (!q.empty()) {
		int X = q.front().first, P = q.front().second; q.pop();
		if (X == K) { cout << P << '\n'; break; }
		if (X + 1 < U && v[X + 1] == -1) { v[X + 1] = X; q.push({ X + 1,P + 1 }); }
		if (X - 1 > -1 && v[X - 1] == -1) { v[X - 1] = X; q.push({ X - 1,P + 1 }); }
		if (X * 2 < U && v[X * 2] == -1) { v[X * 2] = X; q.push({ X * 2,P + 1 }); }
	}
	if (N != K) {
		while (1) {
			s.push(v[R]); R = v[R];
			if (R == N) { break; }
		}
	}
	while (!s.empty()) { cout << s.top() << ' '; s.pop(); }
}

int main() {
	ios::sync_with_stdio(false); cout.tie(NULL);
	int N, K; cin >> N >> K; V(N, K);
	return 0;
}
/* ■ 설명 ■
[오답 원인] - 메모리 초과
만약 입력 값을 '0 0' 으로 받았을 시에, 19번 째 줄에서

만약 방문했던 부모를 저장하는 배열을 ' -1 ' 으로 초기화해서 구현한 상태에서
index가 ' 0 ' 인 경우에 문제가 생기는 데, 이러한 원인을 추후 분석할 것.
*/
