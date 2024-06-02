#include <iostream>
using namespace std;

int main() {
	int N, X = 0, Y = 0; string S; cin >> N >> S;
	for (char C : S) {
		if (C == 'E') { X++; }
		else if (C == 'W') { X--; }
		else if (C == 'S') { Y++; }
		else if (C == 'N') { Y--; }
	}
	cout << abs(X) + abs(Y);
	return 0;
}