#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N; string s; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> s;
		if (s[s.size() / 2] != s[s.size() / 2 - 1]) { cout << "Do-it-Not\n"; }
		else { cout << "Do-it\n"; }
	}
	return 0;
}