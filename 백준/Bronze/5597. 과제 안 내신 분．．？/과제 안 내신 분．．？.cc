#include <iostream>
using namespace std;

int main() {
	int a, b[30] = { 0 }, c = 0;
	for (int n = 0; n < 28; n++) {
		cin >> a;
		b[a - 1] = a;
	}
	for (int n = 0; n < 30; n++) {
		if (b[n] == 0) { 
			cout << (n + 1) << " "; c++;
			if (c == 2) { break; }
		}
	}
	return 0;
}
/* ■ 설명 ■
변수 [a] 에 입력받은 숫자를, 배열 [b[30]] 의 (a - 1) 번 자리에 넣어두고 (예 : ' 3 ' 을 입력했으면 배열 ' 2 ' 번 자리에 ' 3 ' 넣기)
마지막에 배열 자리 0 ~ 29까지 반복하여 빈 곳을 출력 (n번 자리 + 1)
*/
