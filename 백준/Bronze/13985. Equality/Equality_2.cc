#include <iostream>
using namespace std;

int main() {
	char C[6];
	for (int n = 0; n < 5; n++) { cin >> C[n]; }
	C[0] -= 48; C[2] -= 48; C[4] -= 48;
	(C[0] + C[2] == C[4]) ? cout << "YES" : cout << "NO";
	return 0;
}
