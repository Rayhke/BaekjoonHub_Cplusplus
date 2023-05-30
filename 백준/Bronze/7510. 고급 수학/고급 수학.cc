#include <iostream>
#include <cmath>	// [pow] 를 사용하기 위한 헤더 파일
using namespace std;

int main() {
	int a, b[3] = {}, c, d, e[100000] = {};
	cin >> a;
	for (int n = 0; n < a; n++) {
		for (int m = 0; m < 3; m++) { cin >> b[m]; }
		for (int m = 0; m < 2; m++) {
			c = m;
			for (int l = m + 1; l < 3; l++) {
				if (b[c] > b[l]) { c = l; }
			}
			d = b[m];
			b[m]=b[c];
			b[c] = d;
		}
		e[n] = (pow(b[2], 2) == pow(b[1], 2) + pow(b[0], 2)) ? 1 : 0;
	}
	for (int n = 0; n < a; n++) {
		cout << "Scenario #" << n + 1 << ":\n";
		if (e[n] == 1) { cout << "yes\n\n"; }
		else { cout << "no\n\n"; }
	}
	return 0;
}
/* ■ 설명 ■
세 변의 길이를 입력 받고, 그 세 변의 길이를 이용하여
직각 삼각형이 되는 지 결과를 출력하는 것이며		// (피타고라스 정리)

그 중 가장 긴 변의 길이를 빗변으로 할 때,
나머지 두 변의 길이를 각각 제곱 후 더하여
빗변의 제곱 길이가 같은 지					// 빗변²= 밑변²+ 높이²
결과를 ' 1 '(참), ' 0 '(거짓) 으로
[int e[n]] 배열에 결과값을 담고 마지막에 출력할 때,
배열에 담긴 값 순으로 'yes', 'no' 를 출력한다.
=========================================================
간단하게 하고 싶어서 정렬을 이용하여,
가장 큰 값과 그 외의 값을 배열에
고정 시키는 방식으로 찾아냄
*/
