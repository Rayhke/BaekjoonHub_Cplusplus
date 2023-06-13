#include <iostream>
#include <deque>
using namespace std;

deque <int> dq;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b; cin >> a; string s;
	for (int n = 0; n < a; n++) {
		cin >> s;
		if (s == "push_front") { cin >> b; dq.push_front(b); }
		else if (s == "push_back") { cin >> b; dq.push_back(b); }
		else if (s == "pop_front") { if (dq.empty() != 1) { cout << dq.front() << '\n'; dq.pop_front(); } else { cout << -1 << '\n'; } }
		else if (s == "pop_back") { if (dq.empty() != 1) { cout << dq.back() << '\n'; dq.pop_back(); } else { cout << -1 << '\n'; } }
		else if (s == "size") { cout << dq.size() << '\n'; }
		else if (s == "empty") { cout << dq.empty() << '\n'; }
		else if (s == "front") { if (dq.empty() != 1) { cout << dq.front() << '\n'; } else { cout << -1 << '\n'; } }
		else if (s == "back") { if (dq.empty() != 1) { cout << dq.back() << '\n'; } else { cout << -1 << '\n'; } }
		s = "";
	}
	return 0;
}
/* ■ 설명 ■
자료 구조의 덱을 구현한 것
*/
