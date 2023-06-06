#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int* a = new int[1000000], b, c;
	cin >> b;
	for (int n = 0; n < b; n++) { cin >> c; a[n] = c; }
	sort(a, a + b);
	for (int n = 0; n < b; n++) { cout << a[n] << '\n'; }
	delete[]a;
	return 0;
}