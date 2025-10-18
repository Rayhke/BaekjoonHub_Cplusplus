#include <iostream>
#include <set>
using namespace std;

set<string> Set;

int main() {
	ios_base::sync_with_stdio(false);
	int N; string S; cin >> S; N = S.length();
	for (int n = 0; n < N; n++) {
		for (int m = 1; n + m <= N; m++) {
			Set.insert(S.substr(n, m));
		}
	}
	cout << Set.size();
	return 0;
}