#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	if (n < 60 || (n <= (k + 60))) {
		cout << (n * 1500);
	}
	else {
		cout << (((k + 60) * 1500) + ((n - (k + 60)) * 3000));
	}
	return 0;
}
