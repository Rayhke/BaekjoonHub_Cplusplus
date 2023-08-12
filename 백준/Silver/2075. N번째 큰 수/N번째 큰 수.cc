#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	priority_queue <int, vector<int>, greater<int>> pq;
	int N, M; cin >> N;
	for (int n = 0; n < N * N; n++) {
		cin >> M;
		if (pq.size() >= N) { if (M > pq.top()) { pq.pop(); pq.push(M); } }
		else { pq.push(M); }
	}
	cout << pq.top();
	return 0;
}
/* ■ 설명 ■
[오답 원인]
메모리 초과가 원인인 이유는 모든 입력 값을 전부
priority_queue 에 다 때려 박으니까, 당연히 초과가 나는 것이고
그렇기에 역발상으로, [N] 번 째로 큰 수가 필요하다면
원소를 큰 값을 우선 순위로 [N] 번 만 받으면 그만이다.
*/
