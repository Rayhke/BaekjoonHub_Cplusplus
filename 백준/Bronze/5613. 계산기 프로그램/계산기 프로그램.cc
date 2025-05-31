#include <iostream>
using namespace std;

int main() {
	int Total = 0, In; char C; cin >> Total;
	while (1) {
		cin >> C;
		if (C == '=') { break; }
		cin >> In;
		switch (C) {
		case '+': Total += In; break;
		case '-': Total -= In; break;
		case '*': Total *= In; break;
		case '/': Total /= In; break;
		}
	}
	cout << Total;
	return 0;
}