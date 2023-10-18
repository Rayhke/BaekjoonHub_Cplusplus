#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool R[500][500];
int H, W, Hs, Ws, He, We, U = 1e9;
pair <short, short> PM[] = { {1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1} };
vector <vector<int>> v(500, vector<int>(500, U));
priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

void V() {
	pq.push({ 0,{Hs,Ws} });
	while (!pq.empty()) {
		int x = pq.top().second.second, y = pq.top().second.first, P = pq.top().first; pq.pop();
		if (x == We && y == He) { cout << P; return; }
		for (int n = 0; n < 8; n++) {
			int X = x + PM[n].second, Y = y + PM[n].first;
			if (X < 0 || W <= X || Y < 0 || H <= Y || R[Y][X]) { continue; }
			if (n < 5) {
				if (v[Y][X] > P + 1) {
					v[Y][X] = P + 1; pq.push({ P + 1,{Y,X} });
				}
			}
			else {
				if (v[Y][X] > P) {
					v[Y][X] = v[y][x]; pq.push({ P,{Y,X} });
				}
			}
		}
	}
	cout << -1;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	char c; cin >> H >> W;
	for (int h = 0; h < H; h++) {
		for (int w = 0; w < W; w++) {
			cin >> c;
			if (c == '.') { continue; }
			else if (c == '#') { R[h][w] = 1; }
			else if (c == 'K') { Hs = h; Ws = w; v[h][w] = 0; }
			else if (c == '*') { He = h; We = w; }
		}
	}
	V();
	return 0;
}
/* ■ 설명 ■
서쪽에서 부터 동쪽으로 바람이 불고 있기에
북동, 동, 남동 쪽으론 이동 비용이 없다.
*/
