#include <iostream>
#include <map>
using namespace std;

map<string, bool> Map;

int main() {
	cin.tie(NULL);
	int N; string S; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> S; Map.insert({S, 1});
	}
	while (--N) { cin >> S; Map[S] = 0; }
	for (auto& m : Map) {
		if (m.second) { cout << m.first; break; }
	}
	return 0;
}