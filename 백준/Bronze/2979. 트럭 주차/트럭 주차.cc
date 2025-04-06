#include <iostream>
using namespace std;

int Cost[3], S, E, Use[101], Sum;

int main() {
	for (int& cost : Cost) { cin >> cost; }
	for (int n = 0; n < 3; n++) {
		cin >> S >> E;
		for (int m = S; m < E; m++) { Use[m]++; }
	}
	for (int& use : Use) { Sum += Cost[use - 1] * use; }
	cout << Sum;
	return 0;
}