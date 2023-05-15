#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int n = 0; n < a; n++) {
		if ((a % 2) == 0) {
			for (int m = 0; m < (a / 2); m++) { cout << "* "; } cout << "\n";
			for (int m = 0; m < (a / 2); m++) { cout << " *"; } cout << "\n";
		}
		else if ((a % 2) == 1) {
			for (int m = 0; m < (a / 2) + 1; m++) { cout << "* "; } cout << "\n";
			for (int m = 0; m < (a / 2); m++) { cout << " *"; } cout << "\n";
		}
	}
	return 0;
}
/* ■ 설명 ■
[짝수인 경우]
위, 아래의 데님 패턴 갯수를 [a / 2] 로 간단하게 출력하면 되고,

[홀수인 경우]
짝수인 경우와 비슷하지만
위의 데님을 [(a / 2) + 1] 로 하여 하나 더 출력하고, 
아래 데님은 그대로 [a / 2] 로 하면된다.
*/
