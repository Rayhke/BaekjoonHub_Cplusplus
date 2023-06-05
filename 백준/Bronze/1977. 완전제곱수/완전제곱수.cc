#include <iostream>
#include <cmath>	// [pow], [sqrt] 를 사용하기 위한 헤더 파일 - < 설명 1 >
using namespace std;

inline int s(int a) { return pow(a, 2); }

int main() {
	int a, b, c, d = 0, M, N;
	cin >> M >> N;
	a = sqrt(M); b = pow(a, 2);
	if (b < M) {
		a = a + 1; b = pow(a, 2);
		if (N < b) { cout << -1; return 0; }
	}
	do {
		c = s(a); 
		if (c > N) { break; }
		else { d = d + c; }
		a = a + 1;
	} while (c <= N);
	cout << d << '\n' << b;
	return 0;
}
