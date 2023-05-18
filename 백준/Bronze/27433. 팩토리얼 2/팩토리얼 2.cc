#include <iostream>
using namespace std;

long long s(long long n) {
	if (n <= 1) { return 1; }
	return (n * s(n - 1));
}

int main() {
	long long n;
	cin >> n;
	cout << s(n);
	return 0;
}
/* ■ 설명 ■
정석적인 방식인 재귀 함수를 이용하여 팩토리얼 기능을 구현한 간단한 예제
*/
