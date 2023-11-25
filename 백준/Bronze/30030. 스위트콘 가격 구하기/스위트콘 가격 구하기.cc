#include <iostream>
using namespace std;

int main() {
	int B; cin >> B;
	cout << (B / 11) * 10;
	return 0;
}
/* ■ 설명 ■
원가 + (원가 / 10) = 부가세 포함 가격

입력받는 값의 B가 11의 배수라는 전제하에
이러한 방법이 가능하지만, 만약 그러한 조건 없이
무작위의 입력이 주어진다면, double을 사용하라
*/
