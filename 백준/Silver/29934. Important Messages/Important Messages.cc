#include <iostream>
#include <set>
using namespace std;

set<string> Set;

int main() {
	ios::sync_with_stdio(false);
	int N, M, Count = 0; string S; cin >> N;
	while (N--) {
		cin >> S; Set.insert(S);
	}
	cin >> M;
	while (M--) {
		cin >> S;
		if (Set.count(S)) { Count++; }
	}
	cout << Count;
	return 0;
}