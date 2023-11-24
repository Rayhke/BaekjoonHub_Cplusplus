#include <iostream>
#include <vector>
#include <queue>
#define PAIR pair<int, pair<short, short>>
using namespace std;

short T, H, W, Ha, Wa, Hb, Wb;
int U = 1e9, P, C[105][105];
pair <bool, bool> R[105][105];
pair <short, short> PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
priority_queue <PAIR, vector<PAIR>, greater<PAIR>> pq;

void V(short N, short M) {
	vector <vector<int>> v(H + 3, vector<int>(W + 3, U));
	pq.push({ 0,{N,M} }); v[N][M] = 0;
	while (!pq.empty()) {
		short x = pq.top().second.second, y = pq.top().second.first;
		int Q = pq.top().first; pq.pop();
		if (v[y][x] < Q) { continue; }
		for (int n = 0; n < 4; n++) {
			short X = x + PM[n].second, Y = y + PM[n].first;
			if (X < 0 || W + 2 < X || Y < 0 || H + 2 < Y || R[Y][X].second) { continue; }
			if (R[Y][X].first) {
				if (v[Y][X] > v[y][x] + 1) { v[Y][X] = v[y][x] + 1; pq.push({ v[Y][X],{Y,X} }); }
			}
			else {
				if (v[Y][X] > v[y][x]) { v[Y][X] = v[y][x]; pq.push({ v[Y][X],{Y,X} }); }
			}
		}
	}
	for (int n = 1; n <= H; n++) {
		for (int m = 1; m <= W; m++) {
			if (v[n][m] != U) { C[n][m] += v[n][m]; }
			else { C[n][m] = U; }
		}
	}
}

void Y() {
	vector <vector<int>> v(H + 3, vector<int>(W + 3, U));
	pq.push({ 0,{0,0} }); v[0][0] = 0;
	while (!pq.empty()) {
		short x = pq.top().second.second, y = pq.top().second.first;
		int Q = pq.top().first; pq.pop();
		if (v[y][x] < Q) { continue; }
		for (int n = 0; n < 4; n++) {
			short X = x + PM[n].second, Y = y + PM[n].first;
			if (X < 0 || W + 2 < X || Y < 0 || H + 2 < Y || R[Y][X].second) { continue; }
			if (R[Y][X].first) {
				if (v[Y][X] > v[y][x] + 1) { v[Y][X] = v[y][x] + 1; pq.push({ v[Y][X],{Y,X} }); }
			}
			else {
				if (v[Y][X] > v[y][x]) { v[Y][X] = v[y][x]; pq.push({ v[Y][X],{Y,X} }); }
			}
		}
	}
	for (int n = 1; n <= H; n++) {
		for (int m = 1; m <= W; m++) {
			if (v[n][m] != U) {
				C[n][m] += v[n][m];
				if (R[n][m].first) { C[n][m] -= 2; }
			}
			else { C[n][m] = U; }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	bool K; string S; cin >> T;
	while (T--) {
		cin >> H >> W; K = 1; P = U;
		for (int h = 1; h <= H; h++) {
			cin >> S;
			for (int w = 1, M = 0; w <= W; w++, M++) {
				if (S[M] == 46) { continue; }
				else if (S[M] == 42) { R[h][w].second = 1; }
				else if (S[M] == 35) { R[h][w].first = 1; }
				else if (S[M] == 36) {
					if (K) { Ha = h; Wa = w; K = 0; }
					else { Hb = h; Wb = w; }
				}
			}
		}
		V(Ha, Wa); V(Hb, Wb); Y();
		for (int h = 1; h <= H; h++) {
			for (int w = 1; w <= W; w++) { P = min(P, C[h][w]); }
		}
		cout << P << '\n';
		fill(&C[0][0], &C[H + 2][W + 2], 0);
		fill(&R[0][0], &R[H + 2][W + 2], make_pair(0, 0));
	}
	return 0;
}