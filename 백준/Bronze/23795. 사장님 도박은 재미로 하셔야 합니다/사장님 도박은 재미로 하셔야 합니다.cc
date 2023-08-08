#include <iostream>
using namespace std;

int main() {
	int S = 0, P;
	while (1) {
		cin >> P;
		if (P != -1) { S += P; }
		else { break; }
	}
	cout << S;
}