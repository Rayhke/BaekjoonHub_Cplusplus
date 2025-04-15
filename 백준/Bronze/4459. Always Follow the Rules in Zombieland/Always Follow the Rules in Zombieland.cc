#include <iostream>
#include <string>
using namespace std;

bool Use[50];
string S[50], P;

int main() {
	int Q, R, In; cin >> Q; cin.ignore();
	for (int n = 0; n < Q; n++) { getline(cin, S[n]); Use[n] = 1; }
	cin >> R;
	for (int n = 0; n < R; n++) {
		cin >> In; In;
		if (In < 0 || !Use[In - 1]) { P = "No such rule"; }
		else { P = S[In - 1]; }
		cout << "Rule " << In << ": " << P << '\n';
	}
	return 0;
}