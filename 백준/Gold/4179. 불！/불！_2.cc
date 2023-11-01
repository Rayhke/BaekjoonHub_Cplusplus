#include <iostream>
#include <vector>
#include <queue>
#define Vec vector <int>
#define Pair pair <short, short>
using namespace std;

bool w[1000][1000];
short R, C;
Pair PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
vector <Vec> v(1000, Vec(1000, -1));
priority_queue <pair<int, Pair>, vector<pair<int, Pair>>, greater<pair<int, Pair>>> p, q;

void V() {
	int P = 1;
	while (!p.empty() || !q.empty()) {
		while (!q.empty()) {
			if (q.top().first > P) { break; }
			short x = q.top().second.second, y = q.top().second.first;
			int z = q.top().first; q.pop();
			for (int n = 0; n < 4; n++) {
				short X = x + PM[n].second, Y = y + PM[n].first;
				if (X < 0 || C <= X || Y < 0 || R <= Y || w[Y][X]) { continue; }
				w[Y][X] = 1; q.push({ z + 1,{Y,X} });
			}
		}
		while (!p.empty()) {
			if (p.top().first > P) { break; }
			short x = p.top().second.second, y = p.top().second.first;
			int z = p.top().first; p.pop();
			if (x == 0 || x == C - 1 || y == 0 || y == R - 1) { cout << z; return; }
			for (int n = 0; n < 4; n++) {
				short X = x + PM[n].second, Y = y + PM[n].first;
				if (X < 0 || C <= X || Y < 0 || R <= Y || w[Y][X]) { continue; }
				if (v[Y][X] == -1) {
					v[Y][X] = z + 1; p.push({ v[Y][X],{Y,X} });
				}
			}
		}
		P++;
	}
	cout << "IMPOSSIBLE";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	string s; cin >> R >> C;
	for (int r = 0; r < R; r++) {
		cin >> s;
		for (int c = 0; c < C; c++) {
			if (s[c] == 35) { w[r][c] = 1; }
			else if (s[c] == 74) { v[r][c] = 1; p.push({ 1,{r,c} }); }
			else if (s[c] == 70) { w[r][c] = 1; q.push({ 1,{r,c} }); }
		}
	}
	V();
	return 0;
}
