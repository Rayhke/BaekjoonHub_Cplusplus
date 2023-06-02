#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, c, d = 0;
	cin >> a >> b >> c;
	d = (c - b - 1) / (a - b);
	cout << d + 1;
	return 0;
}