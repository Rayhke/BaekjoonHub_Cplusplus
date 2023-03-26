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
		}					/* 굳이 'for'문에서 빼고 여기에 'n++'를 한 이유는 */
		n++;					/* 'for'문 괄호 안에 'n++' 존재 시 반복 작업이 */
		if (n < t) {				/* 끝나고 난 후에 'n + 1'이 되는 데, 그렇게 되면 */
			a += '\n';			/* 문자열 'a' 마지막 끝에 불필요한 '\n' 하나가 붙어서 */
		}					/* 마무리 되어 배열 마지막 자리를 낭비하므로 */
	}						/* 마지막 반복 때 걸려서 작동되지 않도록 거름망 추가 */
	cout << a;
	return 0;
}
