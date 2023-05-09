#include <iostream>
using namespace std;

int main() {	/* 킹 1, 퀸 1, 룩 2, 비숍 2, 나이트 2, 폰 8 */
	int King, Queen, Look, Bishop, Night, Phone;
	cin >> King >> Queen >> Look >> Bishop >> Night >> Phone;
	cout << 1 - King << " " << 1 - Queen << " " << 2 - Look << " " << 2 - Bishop << " " << 2 - Night << " " << 8 - Phone;
	return 0;
}
/* ■ 설명 ■
과거에 풀었던 방식
*/
