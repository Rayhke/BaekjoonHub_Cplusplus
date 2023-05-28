#include <iostream>
using namespace std;

int main() {
	int A, I; cin >> A >> I;
	cout << (A * (I - 1)) + 1;
	return 0;
}
/* ■ 설명 ■
평균값의 소수 부분은 무조건 올림을 하였기 때문에
실제론 주어지는 평균에 [I - 1] 을 하여, 원래 나와야할
평균에 가깝도록 한 후에 계산하여 나온 결과값에 [Sum + 1] 하면 된다.

나름 색다로운 수학 공식인 거 같다.
*/
