#include <iostream>
using namespace std;

bool R[13]; int T, N; 

int main() {
    cin >> T;
    while (T--) {
        cin >> N;
        cout << "Pairs for " << N << ": ";
        if (2 < N) {
            cout << 1 << ' ' << N - 1;
            R[1] = 1; R[N - 1] = 1;
            for (int n = 1; n < N; n++) {
                if (R[n] || R[N - n]) { continue; }
                if (n == N - n) { R[n] = 1; continue; }
                cout << ", " << n << ' ' << N - n;
                R[n] = 1; R[N - n] = 1;
            }
        }
        cout << '\n';
        for (int n = 0; n < 13; n++) { R[n] = 0; }
    }
    return 0;
}