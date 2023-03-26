#include <iostream>
#include <cstring>					/* 함수 [strlen] 를 쓰기 위한 C++ 헤더 파일 */
using namespace std;

int main() {						/* 문자열 [char s[21]] 는 ([ ]) 괄호 안에 크기를 지정하지 않으면 */
	int t, r;					/* 문자열 [string] 과 마찬가지로 문자열 끝에 반드시 'NULL' 값이 들어감 */
	char s[21] = { 0 };
	string a;					/* 문자열(클래스)[string a] 의 끝에 반드시 'NULL' 값이 들어가기 때문에 */
	cin >> t;					/* 문자열 길이가 10이여도 (문자열 길이 + 1) 만큼의 공간을 차지 하기 때문에 주의 */
	for (int n = 0; n < t;) {
		cin >> r >> s;
		for (int m = 0; m < strlen(s); m++) {	/* [strlen(s)] 함수는 문자열 [char s] 가 빈 공간 'NULL' 값을 만날 때 까지의 */
			for (int l = 0; l < r; l++) {	/* 문자열 길이를 세어줌 */
				a += s[m];
			}
		}
		n++;
		if (n < t) {
			a += '\n';
		}
	}
	cout << a;
	return 0;
}
