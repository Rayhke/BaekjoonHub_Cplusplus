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
/* ■ 설명 ■


==================================================
[개인 의견]
지금껏 백준 문제를 풀면서, 스스로 해결책을 찾아
스스로 알고리즘을 짰지만...
이 문제만큼은 시간 초과를 스스로 해결해 내지 못했고,
인터넷 검색의 힘을 빌려서 풀었기 때문에
나는 처음으로 패배를 경험한 거다.
*/
