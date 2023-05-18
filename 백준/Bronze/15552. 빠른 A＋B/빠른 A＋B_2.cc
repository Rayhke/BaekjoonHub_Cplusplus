#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b, m;
	cin >> m;
	for (int n = 0; n < m; n++) { cin >> a >> b; cout << a + b << '\n'; }
	return 0;
}
/* ■ 설명 ■
인라인 함수를 이용하지 않고 구현
*/
