#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	for (int n = 0; n < a; n++) {
		b = n; c = n;
		while (c != 0) {
			b += c % 10;		// 최종적으로 ' 10 ' 으로 나눌 수 없는, 유일하게 일의 자리만 남음
			c /= 10;
		}
		if (a == b) { cout << n; return 0; }
	}
	cout << 0;
	return 0;
}

/* 
이 설계의 굉장한 점은 내가 한 방식은 [int] 상수형을 [string] 문자형으로 변환하는 작업으로 인해
비효율적이 였지만 이러한 방법을 사용하면 더욱 간결하고, 연산 시간을 줄일 수 있다. (8 ms 걸림)

위의 설계는 비록 내 것이 아니지만
많이 경험하면서 온전히 나의 지식으로 흡수하여,
스스로도 이러한 발상도 떠올릴 수 있도록 늘 정진하자.
아래의 코드는 내 입맛대로 하였다.
*/

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d = 0;
	cin >> a;
	for (int n = 0; n < a; n++) {
		b = n; c = n;
		while (c != 0) {
			b += c % 10;		// 최종적으로 ' 10 ' 으로 나눌 수 없는, 유일하게 일의 자리만 남음
			c /= 10;
		}
		if (a == b) { d = n; break; }
	}
	cout << d;
	return 0;
}
