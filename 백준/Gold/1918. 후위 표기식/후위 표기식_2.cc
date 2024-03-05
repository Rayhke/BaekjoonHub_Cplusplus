#include <iostream>
#include <stack>
#include <map>
using namespace std;

stack <char> s;
map <char, int> m = { {'(',1},{'+',2},{'-',2},{'*',3},{'/',3},{')',4} };

inline void Printf() { cout << s.top(); s.pop(); }

int main() {
	string S; cin >> S;
	for (char C : S) {
		if ('A' <= C && C <= 'Z') { cout << C; }
		else if (C == '(') { s.push(C); }
		else if (C == ')') {
			while (!s.empty()) {
				if (s.top() == '(') { s.pop(); break; }
				Printf();
			}
		}
		else {
			while (!s.empty() && m[s.top()] >= m[C]) { Printf(); }
			s.push(C);
		}
	}
	while (!s.empty()) { Printf(); }
	return 0;
}
