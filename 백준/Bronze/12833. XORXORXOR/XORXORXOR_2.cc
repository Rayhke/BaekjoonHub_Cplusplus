#include <iostream>
using namespace std;

inline int s(int a, int b) { return a ^ b; }

int main() {
    int a, b, c; cin >> a >> b >> c;
    if (c & 1) { cout << s(a, b); }
    else { cout << a; }
    return 0;
}
