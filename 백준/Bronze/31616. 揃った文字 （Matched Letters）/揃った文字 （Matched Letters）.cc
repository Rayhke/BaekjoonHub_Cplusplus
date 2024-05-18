#include <iostream>
using namespace std;

int main() {
	bool check = 0; char other; int N; string S; cin >> N >> S;
	other = S[0];
	for (char C : S) {
		if (other != C) { check = 1; }
	}
	(check) ? cout << "No" : cout << "Yes";
	return 0;
}