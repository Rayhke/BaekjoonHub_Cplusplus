#include <iostream>
#include <set>
using namespace std;

set<int> Set;

int main() {
	bool R; int N, In, Even = 0, Odd = 0; cin >> N;
	while (N--) {
		cin >> In; Set.insert(In);
		In & 1 ? Odd++ : Even++;
	}
	R = Odd < Even;
	for (int n = 1 + R; n < 1000001; n += 2) {
		if (Set.count(n)) { continue; }
		cout << n; break;
	}
	return 0;
}