#include <iostream>
#include <vector>
#include <queue>
#define Vec vector<int>
#define PAIR pair<short, int>
using namespace std;

int N, M, T, U = 1e9;
vector <Vec> Weight(301, Vec(301, U));
vector <PAIR> V[301];
queue <PAIR> Q;

void BFS() {
	for (int n = 1; n <= N; n++) { Weight[n][n] = 0; }
	for (int n = 1; n <= N; n++) {
		Q.push({ n,0 });
		while (!Q.empty()) {
			auto [node, bestHeight] = Q.front(); Q.pop();
			for (PAIR next : V[node]) {
				int height = max(next.second, bestHeight);
				if (Weight[n][next.first] > height) {
					Weight[n][next.first] = height;
					Q.push({ next.first,Weight[n][next.first] });
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int x, y, z; cin >> N >> M >> T;
	while (M--) {
		cin >> x >> y >> z;
		V[x].push_back({ y,z });
	}
	BFS();
	while (T--) {
		cin >> x >> y;
		if (Weight[x][y] == U) { cout << -1 << '\n'; continue; }
		cout << Weight[x][y] << '\n';
	}
	return 0;
}
/* ■ 설명 ■
플로이드-워셜이 아닌, 다익스트라 구조를 응용하여
모든 노드들을 탐색한 방식으로 예제를 풀었다.
*/
