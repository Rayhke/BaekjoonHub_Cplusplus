#include <iostream>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed;		/* 선행 조건 : 소수점 이하의 자릿수만 조절 가능 */
	cout.precision(10);	/* 함수 : 괄호 안의 수 만큼 자릿수 추가로 출력 */
	cout << a / b;
	return 0;
}
/* ■ 설명 ■
[cout]를 사용하여 실수를 출력 시엔 (정수 부분 + 소수점 부분)을 합해서 6자리를 출력하는 데, 사용자가 임의로 출력 자릿수를 늘리고자 한다면 
[cout.precision();] 를 입력 후 괄호 안에 원하는 숫자 만큼 입력시에 자릿수를 줄이거나 늘리기가 가능하지만, 
자리를 차지 하는 우선 순위가 (정수 부분)이 우선시 되기 때문에 (소수점 부분)만 늘리고 싶다면 반드시
[cout << fixed;] 선행 입력 후 진행할 것
*/
