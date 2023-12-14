#include <iostream>
using namespace std;

int main() {
	int V[3], P = 101, Q, R = 0;
	for (int n = 0; n < 3; n++) {
		cin >> V[n]; R += V[n];
		if (P > V[n]) { P = V[n]; Q = n; }
	}
	if (R > 99) { cout << "OK"; }
	else {
		if (Q == 0) { cout << "Soongsil"; }
		else if (Q == 1) { cout << "Korea"; }
		else { cout << "Hanyang"; }
	}
	return 0;
}