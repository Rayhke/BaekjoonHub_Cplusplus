#include <iostream>
using namespace std;

int main() {
	int a, n = 0;
	char m[52];
	cin >> a >> m;
	for (int l = 0; l < a; l++) {
		if (m[l] == 'a' || m[l] == 'i' || m[l] == 'u' || m[l] == 'e' || m[l] == 'o') n++;
	}
	cout << n;
	return 0;
}