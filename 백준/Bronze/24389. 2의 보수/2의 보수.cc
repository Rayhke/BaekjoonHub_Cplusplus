#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0; string s = "", p = "";
    cin >> a; b = ~a + 1;
    for (int n = 31; n > -1; n--) {
        if (a & (1 << n)) { s += '1'; }
        else { s += '0'; }
        if (b & (1 << n)) { p += '1'; }
        else { p += '0'; }
    }
    for (int n = 0; n < 32; n++) {
        if (s[n] != p[n]) { c++; }
    }
    cout << c;
    return 0;
}