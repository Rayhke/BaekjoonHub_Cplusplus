#include <iostream>
#include <queue>
using namespace std;

queue <int> q;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b; cin >> a; string s;
	for (int n = 0; n < a; n++) {
		cin >> s;
		if (s == "push") { cin >> b; q.push(b); }
		else if (s == "pop") { if (q.empty() != 1) { cout << q.front() << '\n'; q.pop(); } else { cout << -1 << '\n'; } }
		else if (s == "size") { cout << q.size() << '\n'; }
		else if (s == "empty") { cout << q.empty() << '\n'; }
		else if (s == "front") { if (q.empty() != 1) { cout << q.front() << '\n'; } else { cout << -1 << '\n'; } }
		else if (s == "back") { if (q.empty() != 1) { cout << q.back() << '\n'; } else { cout << -1 << '\n'; } }
		s = "";
	}
	return 0;
}
