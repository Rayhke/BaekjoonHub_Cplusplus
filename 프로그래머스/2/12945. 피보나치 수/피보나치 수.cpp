#include <iostream>
using namespace std;

int Fibonacci[100001];

int solution(int n) {
    if (n == 0 || n == 1) { return 1; }
    Fibonacci[0] = 0; Fibonacci[1] = 1;
    for (int m = 2; m <= n; m++) {
        Fibonacci[m] = (Fibonacci[m - 1] + Fibonacci[m - 2]) % 1234567;
    }
    return Fibonacci[n];
}