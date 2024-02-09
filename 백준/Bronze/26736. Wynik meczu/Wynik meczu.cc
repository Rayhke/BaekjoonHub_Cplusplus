#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int countA = 0, countB = 0; string S; cin >> S;
	for (char& C : S) {
		if (C == 65) { countA++; }
		else { countB++; }
	}
	cout << countA << " : " << countB;
	return 0;
}