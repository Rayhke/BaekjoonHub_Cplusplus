#include <iostream>
#include <cmath>	// pow, sqrt
#include <iomanip>	// setprecision
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(10);
	cout << a + b - sqrt(pow(a, 2) + pow(b, 2));
	return 0;
}
/* ■ 설명 ■
끝 모서리 부분에 얼룩이 묻어서
얼룩 묻은 부분만 잘라내고자 할 때

이것을 직사각형으로 자르는 길이[a + b]와
대각선 (피타고라스 정리) 길이[√(a²+ b²)]로 자르는 길이의
차이를 출력하라.
*/
