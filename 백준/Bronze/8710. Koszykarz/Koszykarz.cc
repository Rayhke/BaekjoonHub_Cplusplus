#include <iostream>
using namespace std;

int main() {
	int k, w, m, n = 0;
	cin >> k >> w >> m;
	while (k < w) {
		k += m;
		n++;
	}
	cout << n;
	return 0;
}