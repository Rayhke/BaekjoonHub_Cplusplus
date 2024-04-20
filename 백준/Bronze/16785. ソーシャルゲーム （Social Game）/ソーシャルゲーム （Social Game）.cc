#include <iostream>
using namespace std;

int main() {
	int A, B, C, coin = 0, days = 0; cin >> A >> B >> C;
	while (1) {
		if (coin >= C) { break; }
		coin += A; days++;
		if (days % 7 == 0) { coin += B; }
	}
	cout << days;
	return 0;
}