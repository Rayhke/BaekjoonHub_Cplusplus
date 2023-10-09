#include <iostream>
using namespace std;

bool r[500][500];
short M, N, v[500][500], PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
int w[500][500];

int V(short y, short x) {
	if (y == M - 1 && x == N - 1) { return 1; }
	if (r[y][x]) { return w[y][x]; }
	r[y][x] = 1;
	for (int n = 0; n < 4; n++) {
		short X = x + PX[n], Y = y + PY[n];
		if (X < 0 || N <= X || Y < 0 || M <= Y) { continue; }
		if (v[y][x] > v[Y][X]) { w[y][x] += V(Y, X); }
	}
	return w[y][x];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> M >> N;
	for (int m = 0; m < M; m++) {
		for (int n = 0; n < N; n++) { cin >> v[m][n]; }
	}
	cout << V(0, 0);
	return 0;
}
/* ■ 설명 ■
너비 우선 탐색(BFS)의 데이크스트라(Dijkstra)를 할 때,
방법을 깊이 우선 탐색(DFS)으로 응용하는 기분이다.

최초로 도착 지점을 방문할 때는 동일 하지만
의외로 도착 지점에 도달하지 못하는 루트로
탔을 경우 ' w[N][M] ' 의 값이 그대로 ' 0 ' 으로 된다.

현재 위치 기준으로 이미 방문한 경로 (다르게 말하면 도착을 성공한 루트)를
방문 했을 시, 방문한 위치의 값을 한 단계 이전 경로로 전달하는 재귀 형식이다.

혹은 이미 방문한 위치이지만 도착 지점으로 도달하지 못한 루트를 다시 밟았다면
이미 ' w[N][M] ' 위치의 값은 ' 0 ' 이므로 별 상관 없다.

그런 식으로 하다 보면 결국엔 출발 지점에 도착 지점에
도달하는 모든 경우의 수가 더 해진다.
=======================================================================
너비 우선 탐색(DFS) + 다이나믹 프로그래밍(DP)을 응용하기 좋은 문제이다.
*/
