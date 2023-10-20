#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool r[1001][1001];

int main() {
	int S; cin >> S;
	queue <pair<int, pair<int, int>>> q; q.push({ 0,{1,0} });
	while (!q.empty()) {
		int C = q.front().second.first, B = q.front().second.second, T = q.front().first + 1; q.pop();
		if (C == S) { cout << T - 1; break; }
		if (!r[C][C]) {
			r[C][C] = 1; q.push({ T,{C,C} });
		}
		if (C + B <= S && !r[C + B][B]) {
			r[C + B][B] = 1; q.push({ T,{C + B,B } });
		}
		if (C > 0 && !r[C - 1][B]) {
			r[C - 1][B] = 1; q.push({ T,{C - 1,B} });
		}
	}
	return 0;
}
/* ■ 설명 ■
C : 현재 채팅 창 / B : 클립보드에 저장된 문자열 길이 / T : 현재 상황까지 오는 데, 걸린 시간
*/
