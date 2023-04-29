#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;			// 대회 라운드 수 설정
	m = n + 1;			// 대회 전체 라운드 중에, 시범 라운드 1회 포함
	cout << (m * 2) << " " << (m * 3);
	return 0;
}
/* ■ 설명 ■	// 백준 - 브론즈 5 (8871번)
라운드 1회 당, 2 ~ 3개 문제가 출제 된다면,
대회에 출제된 문제 수, 최솟값과 최댓값을 출력
*/
