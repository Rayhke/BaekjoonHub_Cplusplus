#include <iostream>
using namespace std;

int N, E, U = 1e9, V[16][16], DP[16][1 << 16];

int TSP(int M, int R) {
    if (R == E) {                                        // 모든 노드에 방문에 성공 했을 시
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
/* ■ 설명 ■
비트 자릿 값을 이용하여, 노드 방문 체크를 대체하는 형식이며 (비트마스킹)
DFS + DP 형식으로 접근하여 푸는 문제이다.
최단 거리로 갈 수 있는 경우의 값들만 조합하여 나타낸다.
*/
