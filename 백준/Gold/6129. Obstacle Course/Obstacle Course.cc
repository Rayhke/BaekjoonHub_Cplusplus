#include <iostream>
#include <vector>
#include <queue>
#define PairSS pair <short, short>
#define PairIS pair <int, short>
#define Vec vector<int>
using namespace std;

bool r[100][100], R[100][100][4];
short N, XE, YE;
int U = 1e9;
PairSS PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
vector <vector<Vec>> v(100, vector<Vec>(100, Vec(4, U)));
queue <pair<PairIS, PairSS>> q;

void V() {
	while (!q.empty()) {
		short x = q.front().second.second, y = q.front().second.first, z = q.front().first.second;
		int P = q.front().first.first; q.pop();
		for (int n = 0; n < 4; n++) {
			short X = x + PM[n].second, Y = y + PM[n].first;
			if (X < 0 || N <= X || Y < 0 || N <= Y || r[Y][X]) { continue; }
			if (P != -1) {
				if (z != n) {
					if (v[Y][X][n] > P + 1) { R[Y][X][n] = 1; v[Y][X][n] = P + 1; q.push({ {P + 1,n},{Y,X} }); }
				}
				else {
					if (v[Y][X][n] > P) { R[Y][X][n] = 1; v[Y][X][n] = P; q.push({ {P,n},{Y,X} }); }
				}
			}
			else {
				if (v[Y][X][n] > P) { R[Y][X][n] = 1; v[Y][X][n] = P; q.push({ {P,n},{Y,X} }); }
			}
		}
	}
	for (int n = 0; n < 4; n++) {
		if (R[YE][XE][n]) { U = min(U, v[YE][XE][n]); }
	}
	cout << U - 1;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	string s; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> s;
		for (int m = 0; m < N; m++) {
			if (s[m] == 46) { continue; }
			else if (s[m] == 120) { r[n][m] = 1; }
			else if (s[m] == 65) {
				q.push({ {0,-1},{n,m} });
				for (int l = 0; l < 4; l++) { v[n][m][l] = 0; R[n][m][l] = 1; }
			}
			else if (s[m] == 66) { YE = n; XE = m; }
		}
	}
	V();
	return 0;
}