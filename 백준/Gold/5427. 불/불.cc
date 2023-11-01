#include <iostream>
#include <vector>
#include <queue>
#define Pair pair <short, short>
#define Vec vector <pair<bool, bool>>
using namespace std;

short T, W, H;
Pair PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
vector <Vec> v(1000, Vec(1000, { 0,0 }));
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
				if (X < 0 || W <= X || Y < 0 || H <= Y || v[Y][X].first) { continue; }
				v[Y][X].first = 1; q.push({ z + 1,{Y,X} });
			}
		}
		while (!p.empty()) {
			if (p.top().first > P) { break; }
			short x = p.top().second.second, y = p.top().second.first;
			int z = p.top().first; p.pop();
			if (x == 0 || x == W - 1 || y == 0 || y == H - 1) { cout << z << '\n'; return; }
			for (int n = 0; n < 4; n++) {
				short X = x + PM[n].second, Y = y + PM[n].first;
				if (X < 0 || W <= X || Y < 0 || H <= Y || v[Y][X].first) { continue; }
				if (!v[Y][X].second) { v[Y][X].second = 1; p.push({ z + 1,{Y,X} }); }
			}
		}
		P++;
	}
	cout << "IMPOSSIBLE\n";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	string s; cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> W >> H;
		for (int h = 0; h < H; h++) {
			cin >> s;
			for (int w = 0; w < W; w++) {
				if (s[w] == 35) { v[h][w].first = 1; }
				else if (s[w] == 42) { v[h][w].first = 1; q.push({ 1,{h,w} }); }
				else if (s[w] == 64) { v[h][w].second = 1; p.push({ 1,{h,w} }); }
			}
		}
		V();
		while (!p.empty()) { p.pop(); }
		while (!q.empty()) { q.pop(); }
		for (int h = 0; h < H; h++) {
			for (int w = 0; w < W; w++) { v[h][w].first = 0; v[h][w].second = 0; }
		}
	}
	return 0;
}