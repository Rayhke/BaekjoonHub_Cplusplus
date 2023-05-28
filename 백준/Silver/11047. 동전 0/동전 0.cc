#include <iostream>
using namespace std;

int s(int a[], int c, int n) {
	int x = n - 1;
	while (x > -1) {
		if (a[x] <= c) { break; }
		x--;
	}
	return x;
}

int main() {
	int a[10] = {}, b, c, n = 0, m = 9, l = 0;
	cin >> b >> c;
	for (n = 0; n < b; n++) { cin >> a[n]; }
	m = s(a, c, n);
	while (c) {
		if (c >= a[m]) { l = l + (c / a[m]); c = c % a[m]; }	// 몫 만큼 [l] 동전(지폐 등) 개수로 카운트, 나머지(잔돈)은 [c] 로 넘기기
		else if (m > 0) { m--; }				// a[m] 가 [c] 보다 커졌을 때, 자릿값 감소를 하되 0 이하로 떨어지지 않도록 조건 제시
	}
	cout << l;
	return 0;
}
/* ■ 설명 ■
[b] 개 만큼의 동전(혹은 지폐 등) 종류가 있으며
반드시 오름차순으로 입력값이 주어진다.

[c] 원의 금액이 주어 진다면, 동전 (혹은 지폐 등) 종류를
최소한으로 사용하여 잔돈 없이 맞추고자 하면
최대 필요한 동전 (혹은 지폐 등)의 갯수는 몇 개 [ㅣ] 일까?
=========================================================
상수 [int s()] 를 이용하여,
