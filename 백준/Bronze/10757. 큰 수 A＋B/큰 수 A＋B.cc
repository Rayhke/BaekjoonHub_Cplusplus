#include <iostream>
#include <string>
using namespace std;

string BigSum(string a, string b) {	// 입력 받은 값을 맨 한 칸, 한 칸 씩 덧셈 연산 작업
	if (a.size() < b.size()) {	// 그 후, 한 칸 자리 값이 ' 0 ~ 9 ' 를 넘는 ' 10 ' 이 된다면?
		swap(a, b);		// 앞 칸에 ' + 1 ' 을 처리하는 작업
	}

	int m = a.size() - 1;

	for (int n = b.size() - 1; n >= 0; n--, m--) {
		a[m] += (b[n] - '0');
	}

	for (int n = a.size() - 1; n > 0; n--) {
		if (a[n] > '9') {
			int c = a[n] - '0';
			a[n - 1] = ((a[n - 1] - '0') + c / 10) + '0';
			a[n] = (c % 10) + '0';
		}
	}

	if (a[0] > '9') {
		string d;
		d += a[0];
		a[0] = ((a[0] - '0') % 10) + '0';
		d[0] = ((d[0] - '0') / 10) + '0';
		a = d + a;
	}

	return a;
}

int main() {
	string a, b;
	cin >> a >> b;
	cout << BigSum(a, b);
	return 0;
}
/* ■ 설명 ■

*/
