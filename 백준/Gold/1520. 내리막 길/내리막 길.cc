#include <iostream>
using namespace std;

bool r[500][500];
int M, N, v[500][500], w[500][500], PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };

int V(int y, int x) {
	if (y == M - 1 && x == N - 1) { return 1; }
	if (r[y][x]) { return w[y][x]; }
	r[y][x] = 1;
	for (int n = 0; n < 4; n++) {
		int X = x + PX[n], Y = y + PY[n];
		if (X < 0 || N <= X || Y < 0 || M <= Y) { continue; }
		if (v[y][x] > v[Y][X]) { w[y][x] += V(Y, X); }
	}
	return w[y][x];
}

int main() {
	ios::sync_with_stdio(false);
	cin >> M >> N;
	for (int m = 0; m < M; m++) {
		for (int n = 0; n < N; n++) { cin >> v[m][n]; }
	}
	cout << V(0, 0);
	return 0;
}