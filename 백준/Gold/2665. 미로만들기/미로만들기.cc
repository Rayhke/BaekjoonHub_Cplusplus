#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, U = 1e9, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
vector <vector<bool>> v(50, vector<bool>(50, 1));

void V() {
	priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
	// priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector <vector<int>> w(50, vector<int>(50, U)); w[0][0] = 0; pq.push({ 0,{0,0} });
	while (!pq.empty()) {
		int x = pq.top().second.second, y = pq.top().second.first, P = 0; pq.pop();
		if (x == N - 1 && y == N - 1) { break; }
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n]; P = 0;
			if (X < 0 || N <= X || Y < 0 || N <= Y) { continue; }
			if (!v[Y][X]) { P = 1; }
			if (w[Y][X] > w[y][x] + P) { w[Y][X] = w[y][x] + P; pq.push({ w[Y][X],{Y,X} }); }
		}
	}
	cout << w[N - 1][N - 1];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> N;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			char c; cin >> c;
			if (c == 48) { v[n][m] = 0; }
		}
	}
	V();
	return 0;
}