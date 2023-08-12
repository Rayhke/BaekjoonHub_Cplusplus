#include <iostream>
using namespace std;

int main() {
	cout << "SHIP NAME      CLASS          DEPLOYMENT IN SERVICE\n";
	cout << "N2 Bomber      Heavy Fighter  Limited    21        \n";
	cout << "J-Type 327     Light Combat   Unlimited  1         \n";
	cout << "NX Cruiser     Medium Fighter Limited    18        \n";
	cout << "N1 Starfighter Medium Fighter Unlimited  25        \n";
	cout << "Royal Cruiser  Light Combat   Limited    4         ";
	return 0;
}
/* ■ 설명 ■
1, 2번 열은 15칸 / 3번 열은 11칸 / 4번 열은 10칸

[오답 원인]
4번 째 열에서 단순히 숫자 입력된 칸만 차지 한다고 생각해서
10칸이 아닌 1 ~ 2칸만 사용해서 지금까지 오답이 났던 것이다.
*/
