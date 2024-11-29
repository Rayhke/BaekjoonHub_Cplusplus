#include <iostream>

bool BIT[1001];

int main() {
    int L, R, X; std::cin >> L >> R >> X;
    for (int n = L; n <= R; n++) {
        BIT[n | X] = 1;
    }
    for (int n = 0; n <= R + 1; n++) {
        if (!BIT[n]) { std::cout << n; break; }
    }
    return 0;
}