#include <iostream>
#include <cstring>	// [strlen] 명령문을 쓰기 위한 헤더파일
using namespace std;

int main() {
	char a[1000];
	char b[1000];
	cin >> a >> b;
	if (strlen(a) >= strlen(b)) cout << "go";
	else cout << "no";
	return 0;
}
