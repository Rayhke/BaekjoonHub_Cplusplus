#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M, U = 1e9, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
vector <vector<bool>> v(100, vector<bool>(100, 0));

void V() {
	priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
	vector <vector<int>> w(100, vector<int>(100, U)); w[0][0] = 0; pq.push({ 0,{0,0} });
	while (!pq.empty()) {
		int x = pq.top().second.second, y = pq.top().second.first; pq.pop();
		if (x == M - 1 && y == N - 1) { cout << w[y][x]; return; }
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n], P = 0;
			if (X < 0 || M <= X || Y < 0 || N <= Y) { continue; }
			if (v[Y][X]) { P = 1; }
			if (w[Y][X] > w[y][x] + P) { w[Y][X] = w[y][x] + P; pq.push({ w[Y][X],{Y,X} }); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> M >> N;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			char c; cin >> c;
			if (c == 49) { v[n][m] = 1; }
		}
	}
	V();
	return 0;
}