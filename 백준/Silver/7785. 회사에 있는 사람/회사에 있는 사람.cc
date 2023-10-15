#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	map <string, bool, greater<string>> m;
	int N; string S, P; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> S >> P;
		if (P == "enter") { m[S] = 1; }
		else { m[S] = 0; }
	}
	for (const auto& n : m) {
		if (n.second) { cout << n.first << '\n'; }
	}
}