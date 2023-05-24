#include <iostream>
using namespace std;

int main() {
	int a, b, c, d = 10001, e = -10001, f = 10001, g = -10001;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b >> c;
		d = (b < d) ? b : d; e = (b > e) ? b : e;	// x축 최소값, 최대값 찾기 
		f = (c < f) ? c : f; g = (c > g) ? c : g;	// y축 최소값, 최대값 찾기
	}
	cout << (e - d) * (g - f);
	return 0;
}
/* ■ 설명 ■
좌표 x축, y축이 각각 자기 축의 최대값과 최소값을 찾은 후,
(최대 - 최소 = 총 길이) 빼서 총 가로, 세로를 구하여 곱하면 그것이 우리가 구하는 넓이다.
*/
