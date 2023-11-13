#include <iostream>
using namespace std;

int N, E, U = 1e9, V[16][16], DP[16][1 << 16];

int TSP(int M, int R) {
    if (R == E) {                                            // 모든 노드에 방문에 성공 했을 시
        if (V[M][0] > 0) { return V[M][0]; }
        return U;
    }
    else if (DP[M][R] != 0) { return DP[M][R]; }             // 특정 노드 방문 수와 같으면서, 이미 최단 거리 값이 존재하면 P로 돌아가기
    DP[M][R] = U;
    for (int n = 0; n < N; n++) {
        if (V[M][n] == 0 || R & (1 << n)) { continue; }      // 1 : 노드 M 에서 노드 n 으로 갈 경로가 없는 경우 
        int P = TSP(n, R | 1 << n);                          // 2 : 이미 방문한 노드인 경우
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
TSP (순회 영업 사원 문제)
전형적인 최단 해밀턴 경로를 찾는 문제이며, 이 문제는 그래프의 모든 정점을 한 번씩만
방문 하도록 하며, 최단 경로로 출발 지점으로 돌아 오도록 하는 문제이다.

비트의 자릿 값을 이용하여, 노드 방문 체크를 하며 (비트마스킹)                // 1, 4 방문 시 = 1001(5) 에 최단 누적 가중치 값 저장
DFS(깊이 우선 탐색) + DP(다이나믹 알고리즘) 형식으로 접근하여 푸는 문제이다.
*/
