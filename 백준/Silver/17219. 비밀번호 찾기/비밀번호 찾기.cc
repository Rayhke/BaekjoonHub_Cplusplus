#include <iostream>
#include <map>
using namespace std;

map<string, string> Map;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M; string U, I; cin >> N >> M;
	while (N--) {
		cin >> U >> I; Map.insert({ U,I });
	}
	while (M--) {
		cin >> U;
		cout << Map[U] << '\n';
	}
	return 0;
}