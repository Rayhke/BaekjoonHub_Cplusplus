#include <iostream>
#include <string>
using namespace std;

int main() {
	char Now = '.'; string S; getline(cin, S);
	for (char C : S) {
		if (Now != C) { cout << C; }
		Now = C;
	}
	return 0;
}