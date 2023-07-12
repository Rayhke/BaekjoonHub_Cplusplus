#include <iostream>
using namespace std;

int main() {
	int a[46] = { 0,1,1 }, K; cin >> K;
	for (int n = 3; n < 46; n++) { a[n] = a[n - 1] + a[n - 2]; }
	cout << a[K - 1] << ' ' << a[K];
	return 0;
}
/* ■ 설명 ■
최초에 ' A ' 가 하나 존재 하며
버튼을 누를 때 마다, ' A ' 는 ' B ' 로 전환되고
' B ' 는 ' BA ' 가 된다는 것을 해석 해보면

피보나치 수열에서 ' A ' 는 ' B ' 보다 한 칸 낮은 값이 출력된다.
*/
