#include <iostream>
using namespace std;

int main() {
	int h, m, s;
	cin >> h >> m >> s;
	if ((m + s) >= 60) {
		h += (m + s) / 60;
		m = (m + s) % 60;
		if (h >= 24) { h = h % 24; }
	}
	else { m = m + s; }
	cout << h << " " << m << endl;
	return 0;
}
/* ■ 설명 ■

*/
