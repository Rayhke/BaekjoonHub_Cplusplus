#include <iostream>
#include <iomanip>  // 소숫점 자리 명령어 쓸 헤더 파일
using namespace std;

int main() {
	int X, N, x[100], y[100];
	double Y, vs;
	cin >> X >> Y >> N;
	double min = (((double)1000 / Y) * X);		// ((double)1000 / Y) 연산 작업에 X 를 안 곱해서 에러났다
	for (int n = 0; n < N; n++) { cin >> x[n] >> y[n]; }
	for (int n = 0; n < N; n++) {
		vs = (((double)1000 / y[n]) * x[n]);	// 나누기를 할 때, 둘 중 하나가 반드시 실수형인지 체크
		min = (min < vs) ? min : vs;
	}
	cout << fixed;
	cout << setprecision(2) << min << endl;		// precision는 그냥 선언이 되지만 set가 붙으면 아니다. <iomanip> 를 선언할 것
	return 0;
}
/* ■ 설명 ■
나누기를 할 때, (a, b) 가 둘 다 정수형인 int 면 소숫값은 버려진 채 결과가 나오기 때문에
예상 밖의 값이 나오지만, 만약 (a or b) 이 실수형 float, double 이면 결과값은 소숫점이 정상적으로
출력된다.

◆ 오답 원인 ◆
min 에 (1000 / Y) 해놓고 * X를 안해서
만약 제일 처음 받은 값이 최솟값으로 선택되면 결과값이 에러가 난다.
*/
