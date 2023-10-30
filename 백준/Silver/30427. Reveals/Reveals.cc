#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	map <string, pair<bool, int>> m;
	bool R = 1; int N, M; string S, P = "";
	getline(cin, S); cin >> N;
	for (int n = 0; n < N; n++) { cin >> S; m[S] = { 1,0 }; }
	cin >> M;
	for (int n = 0; n < M; n++) {
		cin >> S;
		if (m.count(S)) { m[S].second++; }
		else { m[S] = { 0,1 }; }
	}
	if (m.count("dongho") && m["dongho"].first) { cout << "dongho"; }
	else {
		for (const auto& n : m) {
			if (n.second.first && n.second.second == 0) {
				if (P == "") { P = n.first; }
				else { R = 0; break; }
			}
		}
		if (R && P != "") { cout << P; }
		else if (m.count("bumin") && m["bumin"].first && m["bumin"].second == 0) { cout << "bumin"; }
		else if (m.count("cake") && m["cake"].first && m["cake"].second == 0) { cout << "cake"; }
		else if (m.count("lawyer") && m["lawyer"].first && m["lawyer"].second == 0) { cout << "lawyer"; }
		else {
			for (const auto& n : m) {
				if (n.second.second == 0) { cout << n.first; return 0; }
			}
			cout << "swi";
		}
	}
	return 0;
}