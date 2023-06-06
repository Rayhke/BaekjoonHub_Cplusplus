#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a; char c[4];
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> c;
		cout << (c[0] - '0') + (c[2] - '0') << '\n';
	}
	return 0;
}