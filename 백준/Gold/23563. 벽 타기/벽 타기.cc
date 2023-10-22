#include <iostream>
#include <vector>
#include <queue>
using namespace std;

short H, W, He, We;
pair <short, short> PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
vector <vector<pair<bool, bool>>> v(500, vector<pair<bool, bool>>(500, { 0,0 }));
vector <vector<short>> r(500, vector<short>(500, 32767));
priority_queue <pair<short, pair<short, short>>, vector<pair<short, pair<short, short>>>, greater<pair<short, pair<short, short>>>> pq;

void V() {
	while (!pq.empty()) {
		short x = pq.top().second.second, y = pq.top().second.first, z = pq.top().first; pq.pop();
		if (x == We && y == He) { cout << z; return; }
		if (v[y][x].second) {
			for (int n = 0; n < 4; n++) {
				short X = x + PM[n].second, Y = y + PM[n].first;
				if (X < 0 || W <= X || Y < 0 || H <= Y || v[Y][X].first) { continue; }
				if (v[Y][X].second) {
					if (r[Y][X] > r[y][x]) {
						r[Y][X] = r[y][x]; pq.push({ r[Y][X],{Y,X} });
					}
				}
				else {
					if (r[Y][X] > r[y][x] + 1) {
						r[Y][X] = r[y][x] + 1; pq.push({ r[Y][X],{Y,X} });
					}
				}
			}
		}
		else {
			for (int n = 0; n < 4; n++) {
				short X = x + PM[n].second, Y = y + PM[n].first;
				if (X < 0 || W <= X || Y < 0 || H <= Y || v[Y][X].first) { continue; }
				if (r[Y][X] > r[y][x] + 1) {
					r[Y][X] = r[y][x] + 1; pq.push({ r[Y][X],{Y,X} });
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	string s; cin >> H >> W;
	for (int h = 0; h < H; h++) {
		cin >> s;
		for (int w = 0; w < W; w++) {
			if (s[w] == 35) {
				v[h][w].first = 1; 
				for (int n = 0; n < 4; n++) {
					short X = w + PM[n].second, Y = h + PM[n].first;
					if (X < 0 || W <= X || Y < 0 || H <= Y || v[Y][X].second) { continue; }
					v[Y][X].second = 1;
				}
			}
			else if (s[w] == 83) { r[h][w] = 0; pq.push({ 0,{h,w} }); }
			else if (s[w] == 69) { He = h; We = w; }
		}
	}
	V();
	return 0;
}
/* ■ 설명 ■
벽타기 판정이 어떻게 되는 지 주의할 것.
================
[반례]
10 10
##########
#........#
#........#
#...#E...#
#......S.#
#........#
#........#
##.......#
#........#
##########
3
*/
