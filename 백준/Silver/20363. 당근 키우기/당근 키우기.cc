#include <iostream>
using namespace std;

int main() {
	int X, Y; cin >> X >> Y;
	if (X > Y) { cout << X + Y + (Y / 10); }
	else { cout << X + Y + (X / 10); }
	return 0;
}
/* ■ 설명 ■
놀라울 정도로 간단한 문제이다..
그냥 암산식을 잘 만들면 된다...

햇빛 10번 : 온기 10, 수분 -1
수분 10번 : 온기 -1, 수분 10
=================================
[오답 원인]
[X] 가 큰 경우의 수만 고려함
*/
