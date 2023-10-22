#include <iostream>
#include <vector>
#include <queue>
#define Pair pair<short, short>
using namespace std;

bool v[1000][1000];
short R, C, U = 1e4;
Pair PM[] = { {-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1} };
vector<vector<short>> w(1000, vector<short>(1000, U));
priority_queue <pair<short, Pair>, vector<pair<short, Pair>>, greater<pair<short, Pair>>> pq;

void V() {
	while (!pq.empty()) {
		short x = pq.top().second.second, y = pq.top().second.first, z = pq.top().first; pq.pop();
		if (x == C - 1) { cout << z; return; }
		for (int n = 0; n < 8; n++) {
			short X = x + PM[n].second, Y = y + PM[n].first;
			if (X < 0 || C <= X || Y < 0 || R <= Y) { continue; }
			if (v[Y][X]) {
				if (w[Y][X] > w[y][x]) {
					w[Y][X] = w[y][x]; pq.push({ w[Y][X],{Y,X} });
				}
			}
			else {
				if (w[Y][X] > w[y][x] + 1) {
					w[Y][X] = w[y][x] + 1; pq.push({ w[Y][X],{Y,X} });
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	string s; cin >> R >> C;
	for (int n = 0; n < R; n++) {
		cin >> s;
		for (int m = 0; m < C; m++) {
			if (s[m] == 35) { v[n][m] = 1; }
		}
	}
	for (int n = 0; n < R; n++) {
		if (v[n][0]) { w[n][0] = 0; pq.push({ 0,{n,0} }); }
		else { w[n][0] = 1; pq.push({ 1,{n,0} }); }
	}
	V();
	return 0;
}