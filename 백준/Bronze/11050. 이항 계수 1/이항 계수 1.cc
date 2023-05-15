#include <iostream>
using namespace std;

int main() {
	int n, k, m, N = 1, K = 1, M = 1;
	cin >> n >> k;
	m = n - k;
	while (n) { N *= n; n--; }
	while (k) { K *= k; k--; }
	while (m) { M *= m; m--; }
	cout << N / (K * M);
	return 0;
}
/* ■ 설명 ■
이항 계수를 구하는 알고리즘을 구현한 것이며,
팩토리얼에서 '0!' 은 무조건 '1' 이다.
이것은 제곱이 '2^0' 이 '1' 인 것과도 동일

◆ 자세한 공식은 아래의 사이트를 참고 ◆
https://ko.wikipedia.org/wiki/%EC%9D%B4%ED%95%AD_%EA%B3%84%EC%88%98
*/
