#include <iostream>
using namespace std;

int main() {
	bool N[26] = { 0 }; string S; cin >> S;
	for (int n = 0; n < S.size(); n++) { N[S[n] - 65] = 1; }
	if (N[12] && N[14] && N[1] && N[8] && N[18]) { cout << "YES"; }
	else { cout << "NO"; }
	return 0;
}