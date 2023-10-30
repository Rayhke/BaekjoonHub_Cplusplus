#include <iostream>
#include <vector>
#include <queue>
#define Pair pair <short, short>
using namespace std;

bool M[50][50];
short R, C, YE, XE, U = 0;
Pair PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
vector <vector<short>> w(50, vector<short>(50, -1));
priority_queue <pair<short, Pair>, vector<pair<short, Pair>>, greater<pair<short, Pair>>> q, p;

void V() {
	while (!q.empty() || !p.empty()) {
		while (!p.empty()) {
			if (p.top().first > U) { break; }
			short x = p.top().second.second, y = p.top().second.first, z = p.top().first; p.pop();
			for (short n = 0; n < 4; n++) {
				short X = x + PM[n].second, Y = y + PM[n].first;
				if (X < 0 || C <= X || Y < 0 || R <= Y || M[Y][X]) { continue; }
				if (X != XE || Y != YE) { M[Y][X] = 1; p.push({ z + 1,{Y,X} }); }
			}
		}
		while (!q.empty()) {
			if (q.top().first > U) { break; }
			short x = q.top().second.second, y = q.top().second.first, z = q.top().first; q.pop();
			if (x == XE && y == YE) { cout << z; return; }
			for (short n = 0; n < 4; n++) {
				short X = x + PM[n].second, Y = y + PM[n].first;
				if (X < 0 || C <= X || Y < 0 || R <= Y || M[Y][X] || w[Y][X] != -1) { continue; }
				w[Y][X] = z + 1; q.push({ w[Y][X],{Y,X} });
			}
		}
		U++;
	}
	cout << "KAKTUS";
}

int main() {
	string s; cin >> R >> C;
	for (int r = 0; r < R; r++) {
		cin >> s;
		for (int c = 0; c < C; c++) {
			if (s[c] == 88) { M[r][c] = 1; }
			else if (s[c] == 42) { M[r][c] = 1; p.push({ 0,{r,c} }); }
			else if (s[c] == 83) { w[r][c] = 0; q.push({ 0,{r,c} }); }
			else if (s[c] == 68) { YE = r; XE = c; }
		}
	}
	V();
	return 0;
}