#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N; string s;
	while (1) {
		cin >> s; N = 1;
		if (s == "0") { break; }
		for (int n = 0; s[n] != '\0'; n++) {
			if (s[n] == '1') { N += 3; }
			else if (s[n] == '0') { N += 5; }
			else { N += 4; }
		}
		cout << N << '\n';
	}
}