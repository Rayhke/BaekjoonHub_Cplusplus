#include <iostream>
using namespace std;

int In, Sum[2], Count[] = { 6,3,2,1,2 };

int main() {
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 5; m++) {
			cin >> In;
			Sum[n] += In * Count[m];
		}
	}
	for (auto& S : Sum) { cout << S << ' '; }
	return 0;
}