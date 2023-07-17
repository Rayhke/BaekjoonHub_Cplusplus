#include <iostream>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c;
    d = a ^ b;
    if (c & 1) { cout << d; }
    else { cout << a; }
    return 0;
}