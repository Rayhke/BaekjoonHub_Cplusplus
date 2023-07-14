#include <iostream>
#include <queue>
using namespace std;

priority_queue <int, vector<int>, greater<int>> pq;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, P, Q, R = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> P; pq.push(P); }
	if (N > 1) {
		while (pq.size() > 1) {
			P = pq.top(); pq.pop();
			Q = pq.top(); pq.pop();
			R += P + Q; pq.push(P + Q);
		}
		cout << R;
	}
	else { cout << 0; }
	return 0;
}
/* ■ 설명 ■
[오답 원인]
두 카드 덱이 있을 때 (A, B) 각 카드의 수를 합쳐서
비교한 횟수로 카운트 하는 것이지

만약 카드 덱이 유일하게 하나 밖에 없다면
굳이 비교할 이유가 없기 때문에 ' 0 '을 출력한다.

문제를 제대로 읽지 않은 것이 패착의 원인이다.
*/
