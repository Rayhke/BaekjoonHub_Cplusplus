#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n > 0) {
		cout << n;
		if (n > 1) cout << "\n";
		n--;
	}
	return 0;
}
