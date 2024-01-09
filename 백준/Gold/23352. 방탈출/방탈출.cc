#include <iostream>
#include <vector>
#include <queue>
#define BOOL vector<bool>
#define SS pair<short, short>
#define PAIR pair<int, SS>
using namespace std;

short N, M;
int P = 0, COUNT_MAX = 0, MAP[50][50];
SS PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
vector<BOOL> map(50, BOOL(50));
queue <SS> s;
queue <PAIR> q;

void W(bool K, int Start, int Count, int Max) {
	if (K) {
		// printf("%d %d\n%d = %d + %d\n\n", COUNT_MAX, Count, P, Start, Max);
		if (COUNT_MAX < Count) {
			COUNT_MAX = Count;
			P = Start + Max;
		}
		else if (COUNT_MAX == Count) {
			P = max((Start + Max), P);
		}
	}
}

void V(short ys, short xs) {
	bool K = 0;
	int Start = MAP[ys][xs], Count = 0, Max = 0;
	vector<BOOL> test = map; test[ys][xs] = 0;
	q.push({0,{ys,xs}});
	while (!q.empty()) {
		short x = q.front().second.second, y = q.front().second.first;
		int Point = q.front().first + 1; q.pop();
		for (const auto& n : PM) {
			short X = x + n.second, Y = y + n.first;
			if (X < 0 || M <= X || Y < 0 || N <= Y || !test[Y][X]) { continue; }
			test[Y][X] = 0; q.push({ Point,{Y,X} });
			if (Count > Point) { continue; }
			K = 1;
			if (Count < Point) {
				Count = Point; Max = MAP[Y][X];
			}
			else if (Count == Point) {
				Max = max(MAP[Y][X], Max);
			}
		}
	}
	W(K, Start, Count, Max);
}

int main() {
	short L, x, y; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> L;
			if (L != 0) {
				map[n][m] = 1; MAP[n][m] = L;
				s.push({ n,m });
			}
		}
	}
	if (N == 1 && M == 1) {
		cout << MAP[0][0] * 2;
		return 0;
	}
	while (!s.empty()) {
		y = s.front().first; x = s.front().second;
		s.pop(); V(y, x);
	}
	cout << P;
	return 0;
}