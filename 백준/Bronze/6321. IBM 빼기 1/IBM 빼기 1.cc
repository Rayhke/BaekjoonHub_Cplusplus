#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; string s; cin >> N; vector <string> v(N, "");
	for (int n = 0; n < N; n++) {
		cin >> s;
		for (int m = 0; m < s.size(); m++) {
			if ('A' <= s[m] && s[m] < 'Z') { v[n] += s[m] + 1; }
			else if (s[m] == 'Z') { v[n] += 'A'; }
		}
	}
	for (int n = 0; n < N; n++) { cout << "String #" << n + 1 << '\n' << v[n] << "\n\n"; }
	return 0;
}