#include <iostream>
using namespace std;
using PAIR = pair<string, int>;

PAIR P[] = {
	{"(1)", 0}, {"()", 1}, {")(", 1}
};

int main() {
	int N = 2; string S; cin >> S;
	for (auto p : P) {
		if (S.find(p.first) != string::npos) {
			N = p.second; break;
		}
	}
	cout << N;
	return 0;
}