#include <iostream>
#include <map>
using namespace std;

map<string, int> Map;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, L, Count = 0; string S; cin >> N >> M;
	while (N--) {
		cin >> L;
		while (L--) { cin >> S; Map[S]++; }
	}
	for (auto& m : Map) {
		if (m.second < M) { continue; }
		Count++;
	}
	cout << Count;
	return 0;
}