#include <iostream>

int main() {
	int a, b = 1; std::cin >> a;
	for (int n = 0; n < a; n++) { b = b * 2; }
	std::cout << b;
	return 0;
}
/* ■ 설명 ■
[pow] 기능을 사용하지 않고 구현한 구조
*/
