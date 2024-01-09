#include <iostream>
#include <vector>
#include <queue>
#define BOOL vector<bool>
#define SS pair<short, short>	// first : 현재 Y축, second : 현재 X축
#define PAIR pair<int, SS>	// first : 이동 가중치, scond. : 'SS'와 동일
using namespace std;

short N, M;
int P = 0, COUNT_MAX = 0, MAP[50][50];
SS PM[] = { {0,1},{0,-1},{1,0},{-1,0} };
vector<BOOL> map(50, BOOL(50));
queue <SS> s;
queue <PAIR> q;

void W(bool K, int Start, int Count, int Max) {
	if (K) {
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
	W(K, Start, Count, Max);	// 조건 체크
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
/* ■ 설명 ■
1. 임의의 방에서 다른 방으로 이동할 때는 항상 두 방 사이의 최단 경로로 이동한다.
2. 1번을 만족하는 경로 중 가장 긴 경로의 시작 방과 끝 방에 적힌 숫자의 합
3. 만약 위 2가지 조건을 만족하는 경로가 여러 개라면, 시작 방과 끝 방에 적힌 숫자의 합이 가장 큰 값이 비밀번호가 된다.

이 말을 해석하면, 시작 지점은 우선 알 수가 없기에
벽이 아닌 곳이 곧 모든 출발 지점이며

시작 지점에서, 맵의 경계선까지 가장 긴 경로로 이동 가능한 루트가 발견되면
시작 지점의 가중치와 도착 지점의 가중치의 합을 저장하고

만약 가장 긴 경로가 동일한 루트가 많다면, 그 중에
시작 지점의 가중치와 도착 지점의 가중치의 합 중 가장 큰 값을 저장한다.

이 문제의 유의점은 가장 긴 경로가 단일이라면
시작 지점의 가중치와 도착 지점의 가중치의 합이 가장 작다하여도
그것을 반환하는 것이 관건이다.

[체크용 코드]
<18번째줄>
printf("%d %d\n%d = %d + %d\n\n", COUNT_MAX, Count, P, Start, Max);
*/
