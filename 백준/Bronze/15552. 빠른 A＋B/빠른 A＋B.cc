#include <iostream>
using namespace std;

inline int s(int a, int b) { return (a + b); }

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b, m;
	cin >> m;
	for (int n = 0; n < m; n++) { cin >> a >> b; cout << s(a, b) << '\n'; }
	return 0;
}