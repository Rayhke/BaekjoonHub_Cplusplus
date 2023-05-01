#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << 1;
	return 0;
}
/* ■ 설명 ■
숫자 a, b가 있을 때, a 와 b 에 각각 1씩 더하고,	(a + 1, b + 1)
그 후에, 서로 곱하고,				      ((a + 1) × (b + 1)) = (ab + a + b + 1)
그 후에, 처음 숫자 a 와 b 값을 각각 빼주고,	 	((ab + a + b + 1) - (a + b)) = (ab + 1)
그 후에, 처음 숫자 a 와 b 를 곱하여 빼준 후에,		((ab + 1) - (ab)) = 1
그 후에, 남은 값에 a 또는, b 값 만큼 제곱 해주면 된다.

고로 해석하자면 1 에 어떤 값을 제곱하던 무조건 1이 되니 별거 아닌 문제다.
*/
