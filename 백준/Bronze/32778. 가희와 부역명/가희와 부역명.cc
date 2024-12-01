#include <iostream>
#include <string>
using namespace std;

int main() {
	bool R = 0; string S; getline(cin, S);
	for (char& C : S) {
		if (C == ')') { break; }
		if (C == '(') { cout << '\n'; R = 1; continue; }
		cout << C;
	}
	cout << (R ? "" : "\n-");
	return 0;
}