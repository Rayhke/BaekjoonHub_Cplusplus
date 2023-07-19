#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	bool S[21] = {}; int N, M; string s; cin >> M;
	for (int n = 0; n < M; n++) {
		cin >> s;
		if (s == "add") { cin >> N; S[N] = true; }
		else if (s == "remove") { cin >> N; S[N] = false; }
		else if (s == "check") { cin >> N; cout << S[N] << '\n'; }
		else if (s == "toggle") { cin >> N; S[N] = !S[N]; }
		else if (s == "all") { for (int m = 1; m < 21; m++) { S[m] = true; } }
		else if (s == "empty") { for (int m = 1; m < 21; m++) { S[m] = false; } }
	}
	return 0;
}