#include <iostream>
using namespace std;

int main() {
	char S[11], Input[11]; int N, Count = 0; cin >> S >> N;
	while (N--) {
		cin >> Input;
		for (int n = 0; n < 5; n++) {
			if (S[n] != Input[n]) { break; }
			else if (n == 4) { Count++; }
		}
	}
	cout << Count;
	return 0;
}