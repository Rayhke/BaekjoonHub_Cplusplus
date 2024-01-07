#include <iostream>
using namespace std;

int main() {
	int N, M = 0, L; cin >> N;
	while (N--) {
		cin >> L; M += L;
	}
	if (M > 0) { cout << "Right"; }
	else if (M < 0) { cout << "Left"; }
	else { cout << "Stay"; }
	return 0;
}