#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0; string s = "", p = "";
    cin >> a; b = ~a + 1;               // 2의 보수는 모든 비트를 반전 후, + 1
    for (int n = 31; n > -1; n--) {
        if (a & (1 << n)) { s += '1'; } // n번 째 위치로 비트 값 ' 1 ' 을 이동 후,
        else { s += '0'; }              // ' AND ' 연산을 한 것.
        if (b & (1 << n)) { p += '1'; } // n번 째 위치로 비트 값 ' 1 ' 을 이동 후,
        else { p += '0'; }              // ' AND ' 연산을 한 것.
    }
    for (int n = 0; n < 32; n++) {
        if (s[n] != p[n]) { c++; }
    }
    cout << c;
    return 0;
}
