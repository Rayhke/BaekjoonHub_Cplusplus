#include <iostream>
using namespace std;

int main() {
	bool R = 1; int N, count = 0; string S; cin >> N >> S;
	for (char C : S) {
		if (C == 'o') {
			count++;
			if (count == 3) { cout << "Yes"; R = 0; break; }
		}
		else if (C == 'x') { count = 0; }
	}
	if (R) { cout << "No"; }
	return 0;
}