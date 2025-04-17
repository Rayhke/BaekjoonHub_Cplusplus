#include <iostream>
#include <map>
using namespace std;

bool P;
string S, Word[10][10];
map<string, int> Map;

int main() {
	for (int n = 0; n < 10; n++) {
		for (int m = 0; m < 10; m++) {
			cin >> S;
			if (!Map.count(S)) { Map[S] = 0; }
			Word[n][m] = S;
		}
	}
	for (int n = 0; n < 10; n++) {
		for (auto& map : Map) { map.second = 0; }
		for (int m = 0; m < 10; m++) {
			Map[Word[n][m]]++;
		}
		for (auto& map : Map) {
			if (map.second == 10) { P = 1; break; }
		}
		if (P) { break; }
	}
	if (!P) {
		for (int m = 0; m < 10; m++) {
			for (auto& map : Map) { map.second = 0; }
			for (int n = 0; n < 10; n++) {
				Map[Word[n][m]]++;
			}
			for (auto& map : Map) {
				if (map.second == 10) { P = 1; break; }
			}
			if (P) { break; }
		}
	}
	cout << P;
	return 0;
}