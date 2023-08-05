#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <pair<int, int>> v[1001];
int w[1001];

void V(int A,int B) {
	priority_queue <pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ 0,A }); w[A] = 0;
	while (!pq.empty()) {
		int X = pq.top().second, S = pq.top().first; pq.pop();
		if (w[X] < S) { continue; }
		if (X == B) { return; }
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n].second, P = v[X][n].first;
			if (w[Y] > w[X] + P) { w[Y] = w[X] + P; pq.push({ w[Y],Y }); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int A, B, N, M, x, y, z; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
	}
	for (int n = 1; n <= N; n++) { w[n] = 1000000000; }
	cin >> A >> B; V(A, B);
	cout << w[B];
	return 0;
}
/* ■ 설명 ■
이 방법의 구조는 무조건 처음 누적 비용을 크게 잡고
그 후에 적은 값으로 갱신 해버리는 방식을 했기에
30번 째 줄의 작업이 반드시 필요하다.

[오답 원인]
최소 값을 구하려면 되려 최대 값 상태로 해야 구할 수 있음을
발상을 떠올리지 못했다.
*/
