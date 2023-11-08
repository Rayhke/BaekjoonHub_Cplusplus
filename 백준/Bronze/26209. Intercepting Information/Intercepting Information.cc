#include <iostream>
using namespace std;

int main() {
	bool R = 1; int N;
	for (int n = 0; n < 8; n++) {
		cin >> N;
		if (!(N == 1 || N == 0)) { R = 0; }
	}
	if (R) { cout << 'S'; }
	else { cout << 'F'; }
	return 0;
}