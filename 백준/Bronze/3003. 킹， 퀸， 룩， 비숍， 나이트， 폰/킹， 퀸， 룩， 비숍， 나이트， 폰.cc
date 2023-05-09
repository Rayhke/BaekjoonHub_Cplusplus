#include <iostream>
using namespace std;

int main() {
	int a[6] = { 1,1,2,2,2,8 }, b;
	for (int n = 0; n < 6; n++) {
		cin >> b; a[n] -= b;
	}
	for (int n = 0; n < 6; n++) { cout << a[n] << " "; }
	return 0;
}
