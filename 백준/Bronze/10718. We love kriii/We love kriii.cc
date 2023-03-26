#include <iostream>
using namespace std;

int main() {
	int n = 2;
	while (n) {
		cout << "강한친구 대한육군";
		--n;
		if (n == 1) {
			cout << "\n";
		}
	}
	return 0;
}
/* ■ 설명 ■ 
[n] 앞, 혹은 뒤에 증감연산자 전위[++n], 후위[n++]의 차이점은
'[n] = n + 1'이 되느냐 'n = [n] + 1'이 되느냐
연산 순서의 차이가 있으니 잘 생각해서 쓸 것.
*/
/*===========================================================*/
/* ■ C언어 ■ */

#include <stdio.h>
int main() {
        printf("강한친구 대한육군\n강한친구 대한육군");
	return 0;
}
