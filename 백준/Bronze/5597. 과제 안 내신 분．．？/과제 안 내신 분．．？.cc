#include <iostream>
using namespace std;

int main() {
	int a, b[30] = { 0 }, c = 0;
	for (int n = 0; n < 28; n++) {
		cin >> a;
		b[a - 1] = a;
	}
	for (int n = 0; n < 30; n++) {
		if (b[n] == 0) { 
			cout << (n + 1) << " "; c++;
			if (c == 2) { break; }
		}
	}
	return 0;
}