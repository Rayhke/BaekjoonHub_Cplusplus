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
		else if (L <= N) {
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