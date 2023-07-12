#include <iostream>
using namespace std;

int main() {
	int a[46] = { 0,1,1 }, K; cin >> K;
	for (int n = 3; n < 46; n++) { a[n] = a[n - 1] + a[n - 2]; }
	cout << a[K - 1] << ' ' << a[K];
	return 0;
}