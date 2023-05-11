#include <iostream>
#include <string>	// [to_string] 를 사용하기 위한 헤더 파일
using namespace std;

int main() {
	int a, b, c, d[10] = {};
	string e;
	cin >> a >> b >> c;
	e = to_string(a * b * c);
	for (int n = 0; e[n] != '\0'; n++) { a = e[n] - '0'; d[a] += 1; }
	for (int n = 0; n < 10; n++) { cout << d[n] << endl; }
	return 0;
}
/* ■ 설명 ■	 // 백준 - 브론즈 2 (2577번)


*/
