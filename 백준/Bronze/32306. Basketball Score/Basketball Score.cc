#include <iostream>
using namespace std;

int main() {
	int In, Team1 = 0, Team2 = 0;
	for (int n = 0; n < 6; n++) {
		cin >> In;
		In *= (n % 3) + 1;
		if (n < 3) { Team1 += In; }
		else { Team2 += In; }
	}
	cout << ((Team1 > Team2) ? 1 : (Team2 > Team1) ? 2 : 0);
	return 0;
}