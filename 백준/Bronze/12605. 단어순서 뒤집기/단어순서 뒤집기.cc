#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack <string> s;

int main() {
	int N; string L, P = ""; cin >> N; cin.ignore();
	for (int n = 1; n <= N; n++) {
		getline(cin, L);
		for (int m = 0; m < size(L); m++) {
			if (L[m] == ' ') { continue; }
			P += L[m];
			if (L[m + 1] == ' ' || m + 1 == size(L)) { P += " "; s.push(P); P = ""; }
		}
		cout << "Case #" << n << ": ";
		while (!s.empty()) {
			cout << s.top(); s.pop();
		}
		cout << '\n';
	}
	return 0;
}