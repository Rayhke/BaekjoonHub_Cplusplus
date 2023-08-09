#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	set <string> s;
	int N, P = 0; string p; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> p;
		if (p == "ENTER") { P += s.size(); s.clear(); }
		else { s.insert(p); }
	}
	cout << P + s.size();
	return 0;
}