#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	float a, b, c = 0, d = 0; string s;
	for (int n = 0; n < 20; n++) {
		cin >> s >> a >> s; b = 0;			// 솔직하게 이 부분은 꼼수가 맞다.
		if (s != "F") {
			if (s == "A+") { b = 4.5; }
			else if (s == "A0") { b = 4.0; }
			else if (s == "B+") { b = 3.5; }
			else if (s == "B0") { b = 3.0; }
			else if (s == "C+") { b = 2.5; }
			else if (s == "C0") { b = 2.0; }
			else if (s == "D+") { b = 1.5; }
			else if (s == "D0") { b = 1.0; }
		}
		if (s != "P") { c += a * b; d += a; }		// 평점이 ' P ' 이면, 절차를 아에 건너뜀
	}
	cout << fixed;
	cout.precision(6);
	cout << c / d;
	return 0;
}
/* ■ 설명 ■
[cin] 가 일반적으론 띄어쓰기는 입력 안 받는다는
발상을 이용하여 약간의 잔머리를 썼다.

전체 전공 과목 [c] += 학점 [a] × 과목 평점 [b]
전체 학점 [d] += 학점 [a]

정답 = [c] / [d]
*/
