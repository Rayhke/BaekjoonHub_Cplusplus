#include <iostream>
#include <queue>
#define Pair pair<int, int>
using namespace std;

bool r[1000][1000];
int N, M;
Pair PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
queue <Pair> q;

void V() {
	while (!q.empty()) {
		short x = q.front().second, y = q.front().first; q.pop();
		if (y == N - 1) { cout << "YES"; return; }
		for (int n = 0; n < 4; n++) {
			short X = x + PM[n].second, Y = y + PM[n].first;
			if (X < 0 || M <= X || Y < 0 || N <= Y || r[Y][X]) { continue; }
			r[Y][X] = 1; q.push({ Y,X });
		}
	}
	cout << "NO";
}

int main() {
	ios::sync_with_stdio(false);
	string s; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		cin >> s;
		for (int m = 0; m < M; m++) {
			r[n][m] = s[m] - 48;
		}
	}
	for (int n = 0; n < M; n++) {
		if (!r[0][n]) { q.push({ 0,n }); }
	}
	V();
	return 0;
}