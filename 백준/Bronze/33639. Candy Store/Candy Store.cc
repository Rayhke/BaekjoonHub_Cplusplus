#include <iostream>
#include <map>
using namespace std;

map<string, string> Map;

int main() {
	int N, Q; string first, last, S; cin >> N >> Q;
	while (N--) {
		cin >> first >> last; first += " " + last;
		S = first[0]; S += last[0];
		Map[S] = Map.find(S) != Map.end() ? "ambiguous" : first;
	}
	while (Q--) {
		cin >> S;
		cout << (Map.find(S) != Map.end() ? Map[S] : "nobody") << '\n';
	}
	return 0;
}