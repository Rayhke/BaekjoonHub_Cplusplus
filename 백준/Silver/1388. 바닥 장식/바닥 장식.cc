#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector <char> v[51];
bool r[51][51] = {};

void DFS(int x, int y) {
	if (r[x][y]) { return; }
	r[x][y] = 1;
	if (v[x][y] == '-') {
		if (y + 1 < M) {
			if (v[x][y + 1] == '-') { DFS(x, y + 1); }
		}
	}
	else if (v[x][y] == '|') {
		if (x + 1 < N) {
			if (v[x + 1][y] == '|') { DFS(x + 1, y); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	char c; int L = 0; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> c; v[n].push_back(c);
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (!r[n][m]) { r[n][m] = 1; L++; }
			else { continue; }
			if (v[n][m] == '-') {
				if (m + 1 < M) {
					if (v[n][m + 1] == '-') { DFS(n, m + 1); }
				}
			}
			else if (v[n][m] == '|') {
				if (n + 1 < N) {
					if (v[n + 1][m] == '|') { DFS(n + 1, m); }
				}
			}
		}
	}
	cout << L;
	return 0;
}