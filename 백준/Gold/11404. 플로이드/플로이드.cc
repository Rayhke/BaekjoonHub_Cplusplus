#include <iostream>
#include <vector>
using namespace std;

const int U = 1e9;
vector <vector<int>> v(101, vector <int>(101, U));

vector <vector<int>> V(int N) {
	vector <vector <int>> d(N, vector<int>(N, U));
	for (int n = 1; n < N; n++) {
		for (int m = 1; m < N; m++) { d[n][m] = v[n][m]; }
		d[n][n] = 0;
	}
	for (int m = 1; m < N; m++) {
		for (int s = 1; s < N; s++) {
			for (int e = 1; e < N; e++) {
				if (d[s][e] > d[s][m] + d[m][e]) { d[s][e] = d[s][m] + d[m][e]; }
			}
		}
	}
	return d;
}

int main() {
	ios::sync_with_stdio(false); cout.tie(NULL);
	int N, M, x, y, z; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> y >> x >> z;
		if (v[y][x] > z) { v[y][x] = z; }
	}
	vector <vector<int>> d = V(N + 1);
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) {
			if (d[n][m] != U) { cout << d[n][m] << ' '; }
			else { cout << 0 << ' '; }
		}
		cout << '\n';
	}
	return 0;
}
/* ■ 설명 ■

[오답 원인]
저번에 풀었던 백준 1916번 (골드 5) 와 비슷한 케이스로 틀린 경우인데
최적의 경우의 수를 구하기 앞서, 최솟값을 구하려면 반대로 최댓값을 먼저
기입 해야 됬었는 데, 당연 하겠지만 방문할 간선이 없으면
처음 기입한 최댓값이 그대로 유지 되어 있을 것이기에

문제의 경우엔 방문할 수 없는 노드는 ' 0 ' 으로 출력하라는 조건을 어겼기 때문에 틀린 거다.
*/
