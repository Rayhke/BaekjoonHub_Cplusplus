#include <iostream>
using namespace std;

int main() {
	int n; 
	cin >> n;
	for (int a = 0; a < n; a++) {
		for (int b = 0; b <= a; b++) {
			cout << "*";
		}
		if (a != (n - 1))cout << "\n";
	}
	return 0;
}