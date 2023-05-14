#include <iostream>
#include <string>		// [to_string] 를 사용하기 위한 헤더 파일 - < 설명 1 >
#include <algorithm>	// [reverse] 를 사용하기 위한 헤더 파일 - < 설명 2 >
#include <cstdlib>		// [atoi] 를 사용하기 위한 헤더 파일 - < 설명 3 >
using namespace std;

int s(int a, int b) {
	int p;
	string c = to_string(a); string d = to_string(b);
	reverse(c.begin(), c.end()); reverse(d.begin(), d.end());
	a = atoi(c.c_str()); b = atoi(d.c_str());
	p = a + b;
	string e = to_string(p);
	reverse(e.begin(), e.end());
	return atoi(e.c_str());
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << s(a, b);
	return 0;
}
/* ■ 설명 ■
저번에 풀었던 (2908번) 상수 문제를 풀 때 사용한 기능을 응용함

< 설명 1 >
[int] 형 상수를 [string] 형 문자열로 변환

< 설명 2 >
문자열 순서를 거꾸로 뒤집어줌

< 설명 3 >
[string] 형 문자열을 다시 [int] 형 상수로 전환

a 와 b 를 입력 받은 후에 거꾸로 뒤집어서 더한 후,
나온 결과값도 마찬가지로 뒤집어서 출력
*/
