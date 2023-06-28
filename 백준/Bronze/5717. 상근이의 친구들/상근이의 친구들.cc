#include <iostream>
using namespace std;

inline int s(int a, int b) { return a + b; }

int main() {
	int a, b;
	do {
		cin >> a >> b;
		if (a + b > 0) { cout << s(a, b) << '\n'; }
	} while (a + b);
	return 0;
}