#include <iostream>
using namespace std;

int main() {
	int y; string S[] = {
		"ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO",
		"SPbSU", "ITMO", "ITMO", "ITMO", "ITMO",
		"ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU",
		"ITMO", "ITMO", "ITMO", "ITMO", "SPbSU",
		"ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO"
	};
	cin >> y; y -= 1995;
	cout << S[y];
	return 0;
}