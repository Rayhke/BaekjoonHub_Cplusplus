#include <iostream>
#include <set>
using namespace std;

int main() {
	set<string> Set; string S;
	for (int n = 0; n < 4; n++) {
		cin >> S; Set.insert(S);
	}
	for (auto& s : Set) {
		for (auto& p : Set) {
			cout << s << ' ' << p << '\n';
		}
	}
	return 0;
}