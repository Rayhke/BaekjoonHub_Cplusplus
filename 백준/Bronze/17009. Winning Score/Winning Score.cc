#include <iostream>
using namespace std;

int main() {
	int P1[3], P2[3], PS1 = 0, PS2 = 0, N;
	for (int& In : P1) { cin >> In; }
	for (int& In : P2) { cin >> In; }
	for (int n = 0; n < 3; n++) {
		N = 3 - n;
		PS1 += P1[n] * N; PS2 += P2[n] * N;
	}
	cout << ((PS1 != PS2) ? ((PS1 > PS2) ? 'A' : 'B') : 'T');
	return 0;
}