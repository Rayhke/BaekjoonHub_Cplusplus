#include <iostream>
using namespace std;

int main() {
    int N, K, T, In, Sum = 0; cin >> N >> K >> T;
    while (N--) {
        cin >> In;
        if (T != K) { T += In + ((T > K) ? -1 : 1) * abs(T - K); }
        else { T += In; }
        Sum += abs(T - K);
    }
    cout << Sum;
    return 0;
}