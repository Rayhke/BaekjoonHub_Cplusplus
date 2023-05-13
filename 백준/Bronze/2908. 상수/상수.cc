#include <iostream>
#include <string>	// [to_string] 를 사용하기 위한 헤더 파일
#include <algorithm>	// [reverse] 를 사용하기 위한 헤더 파일
#include <cstdlib>	// [atoi] 를 사용하기 위한 헤더 파일

int rev1(int a) {
	std::string s = std::to_string(a);	// 상수를 문자열로 입력 받아서 변환
	reverse(s.begin(), s.end());		// 문자열 1 ~ 끝자리까지 거꾸로 뒤집기
	return atoi(s.c_str());			// 문자열을 다시 상수로 변환
}
int rev2(int b) {
	std::string s = std::to_string(b);	// 상수를 문자열로 입력 받아서 변환
	reverse(s.begin(), s.end());		// 문자열 1 ~ 끝자리까지 거꾸로 뒤집기
	return atoi(s.c_str());			// 문자열을 다시 상수로 변환
}

int main() {
	int a, b;
	std::cin >> a >> b;
	if (rev1(a) > rev2(b)) { std::cout << rev1(a) << std::endl; }
	else { std::cout << rev2(b) << std::endl; }
	return 0;
}
/* ■ 설명 ■
굳이 using namespace std; 를 뺀 이유는 헤더 파일 충돌을 피하기 위해서,
동일한 이름의 변수나 함수가 존재한다면 변수나 함수 등 의도와 다른 코드를
참고할 가능성이 있기 때문에, 남발하는 것은 매우 좋지 않다.
 
또한 그렇기 때문에, 현장에서는 그리 잘 쓰지 않으므로 주의할 것...

 endl 는 단순히 '\n' 역할 뿐만 아니라 버퍼를 비우는 중요한 역할을 수행한다.
 버퍼란? 임시 저장 메모리 (휘발성)
*/
