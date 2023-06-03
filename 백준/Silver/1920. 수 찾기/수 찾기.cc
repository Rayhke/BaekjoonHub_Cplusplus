#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[100000] = {}, b, c, d;
	cin >> b;
	for (int n = 0; n < b; n++) { cin >> a[n]; }
	sort(a, a + b);
	cin >> c;
	for (int n = 0; n < c; n++) {
		cin >> d;
		cout << binary_search(a, a + b, d) << '\n';
	}
	return 0;
}