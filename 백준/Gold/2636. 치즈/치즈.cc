#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool P = 1;
int N, M, L = 0, D = 0, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
vector <vector<pair<bool, bool>>> r(100, vector<pair<bool, bool>>(100, { 0,0 }));

void V() {
	vector <vector<bool>> R(100, vector<bool>(100, 1));
	queue <pair<short, short>> q; q.push({ 0,0 }); R[0][0] = 0;
	while (!q.empty()) {
		int x = q.front().second, y = q.front().first; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (-1 < X && X < M && -1 < Y && Y < N) {
				if (R[Y][X]) {
					if (!r[Y][X].first) { q.push({ Y,X }); }
					else { L++; P = 0; r[Y][X].second = 1; }
					R[Y][X] = 0;
				}
			}
		}
	}
}

int main() {
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) { cin >> r[n][m].first; }
	}
	while (1) {
		int U = L; L = 0; V();
		if (P) { cout << D << '\n' << U; break; }
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < M; m++) {
				if (r[n][m].second) { r[n][m].first = 0; r[n][m].second = 0; }
			}
		}
		P = 1; D++;
	}
	return 0;
}
/* ■ 설명 ■
치즈는 가장 자리인 바깥 쪽 겉은 녹지만, 안 쪽 빈 공간은 녹지 않도록 하는 설계에 대해서
치즈 자체에 집중할 것이 아니라.

역발상으로 치즈 가장 바깥부터 탐색하여, 너비 우선 탐색(BFS)을 한다면
정확하게 안 쪽 빈 공간은 방문하지 않고
치즈의 가장 자리인 바깥을 만났을 때만, 따로 체크하여 녹도록 한다.
탐색을 해야될 대상을 역으로 뒤집어서 방문 한다는 발상을 떠올려서 처리 해야되는 훌륭한 문제다.
*/
