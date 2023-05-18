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
/* ■ 설명 ■
인라인 함수의 기능과
[ios::sync_with_stdio(false);] [cin.tie(NULL);] 를 사용하여 빠른 연산을 시행함
*/
