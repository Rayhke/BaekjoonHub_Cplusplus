#include <iostream>
#include <vector>
#include <queue>
#define PairSS pair <short, short>
#define PairIS pair <int, short>
using namespace std;

bool r[100][100], m[100][100][4];
short H, W, HE, WE;
int U = 1e9;
PairSS PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
vector <vector<vector<int>>> v(100, vector<vector<int>>(100, vector<int>(4, U)));
queue <pair<PairIS, PairSS>> q;

void V() {
	while (!q.empty()) {
		short x = q.front().second.second, y = q.front().second.first, z = q.front().first.second;
		int P = q.front().first.first; q.pop();
		for (int n = 0; n < 4; n++) {
			short X = x + PM[n].second, Y = y + PM[n].first;
			if (X < 0 || W <= X || Y < 0 || H <= Y || r[Y][X]) { continue; }
			if (P != -1) {
				if (z != n) {
					if (v[Y][X][n] > P + 1) { m[Y][X][n] = 1; v[Y][X][n] = P + 1; q.push({ {P + 1,n},{Y,X} }); }
				}
				else {
					if (v[Y][X][n] > P) { m[Y][X][n] = 1; v[Y][X][n] = P; q.push({ {P,n},{Y,X} }); }
				}
			}
			else {
				if (v[Y][X][n] > P) { m[Y][X][n] = 1; v[Y][X][n] = P; q.push({ {P,n},{Y,X} }); }
			}

		}
	}
	for (int n = 0; n < 4; n++) {
		if (m[HE][WE][n]) { U = min(U, v[HE][WE][n]); }
	}
	cout << U - 1;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	bool R = 1; string s; cin >> W >> H;
	for (int h = 0; h < H; h++) {
		cin >> s;
		for (int w = 0; w < W; w++) {
			if (s[w] == 42) { r[h][w] = 1; }
			else if (s[w] == 67) {
				if (R) {
					q.push({ {0,-1},{h,w} }); R = 0;
					for (int n = 0; n < 4; n++) { v[h][w][n] = 0; m[h][w][n] = 1; }
				}
				else { HE = h, WE = w; }
			}
		}
	}
	V();
	return 0;
}