#include <iostream>
using namespace std;

int main() {
	int N, T = 0; string S; cin >> N;
	while (N--) {
		cin >> S;
		if (S == "Poblano") { T += 1500; }
		else if (S == "Mirasol") { T += 6000; }
		else if (S == "Serrano") { T += 15500; }
		else if (S == "Cayenne") { T += 40000; }
		else if (S == "Thai") { T += 75000; }
		else if (S == "Habanero") { T += 125000; }
	}
	cout << T;
	return 0;
}