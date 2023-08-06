#include <iostream>
using namespace std;

int main() {
	int M, D; cin >> M >> D;
	if (M < 2) { cout << "Before"; }
	else {
		if (M == 2) {
			if (D < 17) { cout << "Before"; }
			else if (D == 18) { cout << "Special"; }
			else if (D > 18) { cout << "After"; }
		}
		else if (M > 2) { cout << "After"; }
	}
	return 0;
}