#include <iostream>
using namespace std;

bool R1, R2;

int die(int H, int D, int T) {
	int time = 0;
	while (1) {
		H -= D;
		if (H < 1) { break; }
		time += T;
	}
	return time;
}

int main() {
	int H1, D1, T1, H2, D2, T2, DT1, DT2;
	cin >> H1 >> D1 >> T1 >> H2 >> D2 >> T2;
	DT1 = die(H1, D2, T2); DT2 = die(H2, D1, T1);
	if (DT1 == DT2) { cout << "draw"; }
	else {
		cout << "player " << (DT1 < DT2 ? "two" : "one");
	}
	return 0;
}