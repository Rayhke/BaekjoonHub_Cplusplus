#include <iostream>
using namespace std;

int main() {
	int N, A = 0, B = 0; string S; cin >> N >> S;
	for (char C : S) {
		if (C == 65) { A++; }
		else { B++; }
	}
	S = "Tie";
	if (A != B) { S = (A > B) ? 'A' : 'B'; }
	cout << S;
	return 0;
}