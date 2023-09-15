#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool r[300][300], R = 1;
int N, M, L = 0, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
vector <vector<pair<int, int>>> v(300, vector<pair<int, int>>(300, { 0,0 }));

void V(int n, int m) {
	queue <pair<int, int>> q; q.push({ n,m }); r[n][m] = !R;
	while (!q.empty()) {
		int x = q.front().second, y = q.front().first; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (-1 < X && X < M && -1 < Y && Y < N) {
				if (r[Y][X] == R && v[Y][X].first > 0) { r[Y][X] = !R; q.push({ Y,X }); }
				else if (v[Y][X].first == 0) { v[y][x].second++; }
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) { cin >> v[n][m].first; }
	}
	while (1) {
		int P = 0; R = !R;
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < M; m++) {
				if (r[n][m] == R && v[n][m].first) { P++; V(n, m); }
			}
		}
		if (P > 1) { cout << L; break; }
		else if (P < 1) { cout << 0; break; }
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < M; m++) {
				int Y = v[n][m].first, U = v[n][m].second;
				if (U) {
					if (Y - U > 0) { v[n][m].first -= U; }
					else { v[n][m].first = 0; }
					v[n][m].second = 0;
				}
			}
		}
		L++;
	}
	return 0;
}
/* ■ 설명 ■
[오답 원인]
빙산의 높이가 녹는 조건을 제대로 파악하지 않고 문제를 풀이함.
매일 1칸 씩 내려가는 것이 아니라

주변에 빙산의 높이 ' 0 ' 인 범위의 수에 따라 높이가 최대 ' 0 ~ 4 ' 씩 녹는 것이다.
문제를 급하게 보자마자 푸는 것이 관건이 아니라
천천히 한단계 씩 하자

==================================================================================
[동작절차 체크용]

cout << "\n\n[" << L << "일차]\n";
for (int n = 0; n < N; n++) {
	for (int m = 0; m < M; m++) {
		cout << v[n][m].first << ' ';
	}
	cout << "\n";
}
cout << "\n\n";

*/
