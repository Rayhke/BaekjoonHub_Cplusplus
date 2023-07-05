#include <iostream>
#include <stack>
#include <queue>
using namespace std;

stack <int> s;
queue <int> q;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, L = 1; string S = ""; cin >> N;
	for (int n = 0; n < N; n++) { cin >> M; q.push(M); }
	while (!q.empty()) {
		if ((!s.empty()) && s.top() == q.front()) {
			s.pop(); q.pop();
			S += "-";
		}
		else if (L <= N) {	// 의외로 이게 킬포이자 핵심이다. ' <= '
			s.push(L); L++;
			S += "+";
		}
		else { cout << "NO"; L = 0; break; }
	}
	if (L != 0) {
		for (int n = 0; S[n] != '\0'; n++) { cout << S[n] << '\n'; }
	}
	return 0;
}
/* ■ 설명 ■
간단하게 설명하면, [N] 이 ' 8 ' 이라고 했을 때
[stack <int> s] 에 ' 1 ~ 8 ' 순으로 원소를 넣으되, 
[queue <int> q] 에 담긴 원소 순서대로 ([q.front()] 기준으로) 출력하고자 한다면,
가능한가? 불가능한가? 시도할 것.
*/
