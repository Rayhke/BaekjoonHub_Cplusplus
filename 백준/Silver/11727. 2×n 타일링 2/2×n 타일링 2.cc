#include <iostream>
using namespace std;

int main() {
	int P[1001] = { 1,1,3,5 }, N; cin >> N;
	for (int n = 4; n < 1001; n++) { P[n] = (P[n - 1] + (2 * P[n - 2])) % 10007; }
	cout << P[N];
	return 0;
}
/* ■ 설명 ■
문제를 좀 어렵게 생각 했는 데

[2×n 타일링 1] 일 경우는 1×2 or 2×1, 총 2가지의 블록만으로 조합하여
N 이 짝수일 때는, 2×2 칸을 채우는 것으로 끝을 맺어야 하고
N 이 홀수일 때는, 2×1 칸을 채우는 것으로 끝을 내야 했기 때문에
P[n] = P[n - 1] + P[n - 2] 이라는 식이 만들어진 것이라면

여기서 2×2 블록이 추가 되어서, 단순하게 생각하면
짝수일 경우 채울 수 있는 경우의 수가 2배로 늘어난 셈이기 때문에
P[n] = P[n - 1] + (2 × P[n - 2]) 라는 식이 만들어지는 것이다.
*/
