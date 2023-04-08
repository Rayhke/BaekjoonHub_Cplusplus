#include <iostream>
using namespace std;

int main() {
	int n;
	string a, b;
	cin >> n;
	while (n--) {
		cin >> a;
		b += a[0];
		b += a[a.length() - 1]; // [(변수명).length()] 문자열 길이 세어주는 명령문
		b += "\n";
		a = { 0 };
	}
	cout << b;
	return 0;
}
