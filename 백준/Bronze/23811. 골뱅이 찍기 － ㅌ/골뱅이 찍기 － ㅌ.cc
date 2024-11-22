#include <iostream>
using namespace std;

int N;
string S = "", P = "";

inline void P1() {
    for (int n = 0; n < N; n++) { cout << S << '\n'; }
}

inline void P2() {
    for (int n = 0; n < N; n++) { cout << P << '\n'; }
}

int main() {
    cin >> N;
    for (int n = 0; n < N; n++) { S += "@@@@@"; P += "@"; }
    P1(); P2(); P1(); P2(); P1();
    return 0;
}