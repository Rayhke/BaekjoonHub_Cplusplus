#include <iostream>
using namespace std;

int main() {
	int a[6] = { 1,1,2,2,2,8 }, b;
	for (int n = 0; n < 6; n++) {
		cin >> b; a[n] -= b;
	}
	for (int n = 0; n < 6; n++) { cout << a[n] << " "; }
	return 0;
}
/* ■ 설명 ■
킹, 퀸, 룩, 비숍, 나이트, 폰은 기물의 갯수가 각각
1, 1, 2, 2, 2, 8개가 존재 하므로,
현재 갖고 있는 기물 갯수를 입력하여
부족하거나 많은 기물들의 갯수를 출력하는 것.
*/
