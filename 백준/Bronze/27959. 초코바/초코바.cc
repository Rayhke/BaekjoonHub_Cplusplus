#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	if (100 * N >= M) cout << "Yes";
	else cout << "No";
	return 0;
}
/* ■ 설명 ■
100원을 [N] 개를 가지고 있으며,
초코바 가격이 [M] 일 때, 수중에 가진 돈으로
초코바를 사먹을 수 있는 지에 따라서 "Yes" 또는 "No" 를 출력한다.
*/
