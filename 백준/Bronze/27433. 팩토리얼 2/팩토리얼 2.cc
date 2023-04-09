#include <iostream>
using namespace std;

int main() {
	long long a, b = 1;
	cin >> a;
	for (int n = 1; n <= a; n++) b = b * n;
	if (b > 0) cout << b;
	else cout << "1";
	return 0;
}
