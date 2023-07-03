#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack <char> s;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	string p;
	do {
		getline(cin, p);
		if (p != ".") {
			for (int n = 0; n < size(p); n++) {
				if (p[n] == '(' || p[n] == '[') {
					s.push(p[n]);
				}
				else if (p[n] == ')' || p[n] == ']') {
					if (!s.empty()) {
						if (s.top() == '(' && p[n] == ')') { s.pop(); }
						else if (s.top() == '[' && p[n] == ']') { s.pop(); }
						else { break; }
					}
					else { s.push(p[n]); break; }
				}
			}
			if (s.empty()) { cout << "yes\n"; }
			else { cout << "no\n"; while (!s.empty()) { s.pop(); } }
		}
		else { break; }
	} while (1);
	return 0;
}