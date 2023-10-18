#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int H, W, U = 1e9;
pair <short, short> PM[] = { {1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1} };
vector <vector<pair<int, char>>> v(500, vector<pair<int, char>>(500, { U,' ' }));
priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

void V() {
	while (!pq.empty()) {
		int x = pq.top().second.second, y = pq.top().second.first, P = pq.top().first; pq.pop();
		if (v[y][x].second == '*') { cout << P; return; }
		for (int n = 0; n < 8; n++) {
			int X = x + PM[n].second, Y = y + PM[n].first;
			if (X < 0 || W <= X || Y < 0 || H <= Y || v[Y][X].second == '#') { continue; }
			if (n < 5) {
				if (v[Y][X].first > P + 1) {
					v[Y][X].first = P + 1; pq.push({ P + 1,{Y,X} });
				}
			}
			else {
				if (v[Y][X].first > P) {
					v[Y][X].first = v[y][x].first; pq.push({ P,{Y,X} });
				}
			}
		}
	}
	cout << -1;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> H >> W;
	for (int h = 0; h < H; h++) {
		for (int w = 0; w < W; w++) {
			cin >> v[h][w].second;
			if (v[h][w].second == 'K') { v[h][w].first = 0; pq.push({ 0,{h,w} }); }
		}
	}
	V();
	return 0;
}