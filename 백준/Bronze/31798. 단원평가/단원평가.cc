#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C; cin >> A >> B >> C;
    cout << (C != 0 ? C * C - max(A, B) : (int) sqrt(A + B));
    return 0;
}