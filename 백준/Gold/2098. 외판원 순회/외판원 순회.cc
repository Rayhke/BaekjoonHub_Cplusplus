#include <iostream>
using namespace std;

int N, E, U = 1e9, V[16][16], DP[16][1 << 16];

int TSP(int M, int R) {
    if (R == E) {
        if (V[M][0] > 0) { return V[M][0]; }
        return U;
    }
    else if (DP[M][R] != 0) { return DP[M][R]; }
    DP[M][R] = U;

    for (int n = 0; n < N; n++) {
        if (V[M][n] == 0 || R & (1 << n)) { continue; }
        int P = TSP(n, R | 1 << n);
        DP[M][R] = min(DP[M][R], V[M][n] + P);
    }
    return DP[M][R];
}

int main() {
    ios::sync_with_stdio(false);
    cin >> N; E = (1 << N) - 1;
    for (int n = 0; n < N; n++) {
        for (int m = 0; m < N; m++) { cin >> V[n][m]; }
    }
    cout << TSP(0, 1);
    return 0;
}