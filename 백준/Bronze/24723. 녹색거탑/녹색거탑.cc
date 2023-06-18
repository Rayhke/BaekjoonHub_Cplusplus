#include <iostream>
#include <cmath>
using namespace std;

inline int s(int a) { return pow(2, a); }

int main() {
	int a; cin >> a; cout << s(a);
	return 0;
}
/* ■ 설명 ■
경우의 수로 한 블럭 당 2가지의 경우의 수가 있다면,
블럭 층을 ' n ' 으로 보고, 2ⁿ 으로 계산하면 된다.
*/
