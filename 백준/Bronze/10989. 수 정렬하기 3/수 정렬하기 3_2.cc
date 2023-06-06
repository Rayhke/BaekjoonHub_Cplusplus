#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int* a = new int[10001]{}, b, c;
	cin >> b;
	for (int n = 0; n < b; n++) { cin >> c; a[c]++; }
	for (int n = 1; n < 10001; n++) {
		if (a[n] == 0) { continue; }
		else {
			b = a[n];
			for (int m = 0; m < b; m++) {
				cout << n << '\n';
			}
		}
	}
	delete[]a;
	return 0;
}
