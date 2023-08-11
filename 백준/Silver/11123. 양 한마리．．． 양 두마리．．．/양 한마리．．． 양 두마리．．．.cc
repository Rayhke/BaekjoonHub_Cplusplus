#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool v[100][100];
int PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };

void V(int H, int W) {
	int P = 0;
	queue <pair<int, int>> q;
	vector <vector<bool>> r(H, vector<bool>(W, 1));
	for (int h = 0; h < H; h++) {
		for (int w = 0; w < W; w++) {
			if (v[h][w] && r[h][w]) {
				r[h][w] = 0; q.push({ w,h }); P++;
				while (!q.empty()) {
					int x = q.front().first, y = q.front().second; q.pop();
					for (int n = 0; n < 4; n++) {
						int X = x + PX[n], Y = y + PY[n];
						if (-1 < X && X < W && -1 < Y && Y < H) {
							if (v[Y][X] && r[Y][X]) { r[Y][X] = 0; q.push({ X,Y }); }
						}
					}
				}
			}
		}
	}
	cout << P << '\n';
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	char c; int T, H, W; cin >> T;
	for (int n = 0; n < T; n++) {
		cin >> H >> W;
		for (int h = 0; h < H; h++) {
			for (int w = 0; w < W; w++) {
				cin >> c;
				if (c == '#') { v[h][w] = 1; }
				else { v[h][w] = 0; }
			}
		}
		V(H, W);
	}
	return 0;
}