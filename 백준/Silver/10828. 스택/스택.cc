#include <iostream>
#include <stack>
using namespace std;

stack <int> s;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b; cin >> a; string p;
	for (int n = 0; n < a; n++) {
		cin >> p;
		if (p == "push") { cin >> b; s.push(b); }
		else if (p == "pop") { if (s.empty() != 1) { cout << s.top() << '\n'; s.pop(); } else { cout << -1 << '\n'; } }
		else if (p == "size") { cout << s.size() << '\n'; }
		else if (p == "empty") { cout << s.empty() << '\n'; }
		else if (p == "top") { if (s.empty() != 1) { cout << s.top() << '\n'; } else { cout << -1 << '\n'; } }
		p = "";
	}
	return 0;
}