#include <iostream>
using namespace std;

int main() {
	int AP, AL, BP, BL; cin >> AP >> AL >> BP >> BL;
	while (1) {
		AL -= BP; BL -= AP;
		if (AL < 1 || BL < 1) { break; }
	}
	if (AL < 1 && BL < 1) { cout << "DRAW"; }
	else { (AL > BL) ? cout << "PLAYER A" : cout << "PLAYER B"; }
	return 0;
}