#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool v[1000][1000], r[1000][1000][2];
int N, M, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
queue <pair<pair<int, int>, pair<int, int>>> q;		// 앞의 pair는 y축, x축 탐색용 // 뒤의 pair는 벽을 부순 적 있는 지 체크, 누적 탐사 칸

void V() {
	r[0][0][0] = 1; r[0][0][1] = 1;
	q.push({ { 0,0 }, { 0,1 } });
	while (!q.empty()) {
		bool R = q.front().second.first;
		int x = q.front().first.second, y = q.front().first.first, P = q.front().second.second; q.pop();
		if (x == M - 1 && y == N - 1) { cout << P; return; }	// 목적지에 도착 했다면, 누적 값 출력 후 종료
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (-1 < X && X < M && -1 < Y && Y < N && !r[Y][X][R]) {
				if (!R) {				// 벽을 한 번도 부순 적 없음
					r[Y][X][0] = 1;
					if (!v[Y][X]) { q.push({ {Y,X},{0,P + 1} }); }		// 그렇다면 갈 수 있는 길이 있는가?
					else { q.push({ {Y,X},{1,P + 1} }); }			// 벽이 있다면 지우고 간다.
				}
				else if (!v[Y][X]) {			// 이미 벽을 부쉈음
					r[Y][X][1] = 1;
					q.push({ {Y,X},{1,P + 1} });
				}
			}
		}
	}
	cout << -1;							// 이 경우는 목적지에 도달하지 못했을 경우
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			char c; cin >> c;
			if (c == 49) { v[n][m] = 1; }
		}
	}
	V();
	return 0;
}
/* ■ 설명 ■
지금까지 이 문제를 해결하기 위해
벽을 부수지 않고, 최초 방문으로 도착 지점에 도달하는 가? 와
도착 지점으로 가면서 벽으로 인해 가지 못하는 경우를 체크하고
그 후에 (벽이 있는 위치 + 최초 방문 때 체크했던 벽 위치) 2가지가 성립하는 곳만
딱 골라서 벽을 무시한 채 방문을 하다 보니
시간 복잡도가 (N × M × 벽의 갯수) 가 되어 문제가 되었었다.

하지만 이 경우는 단 한 번의 방문과 함께 동시에
(벽이 있는가? 없는가? + 그렇담 벽을 지울 기회가 있는가? 없는가? + 현 자리에 방문하기까지 누적된 값) 다 포함해서
한 번에 진행한다. 지금껏 해결 해온 문제로는 전혀 생각하지 못했었던 발상이었다...
한 단계 한 단계 작업을 나누어 진행하는 것도 중요하지만, 한 번에 묶어서 가능하다면
최대한 한꺼번에 진행하는 것도 효율 좋다는 것을 잊지 말자.
*/
