#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int N, M, Arr[100000], Sum = 0; cin >> N >> M;
    for (int n = 0; n < N; n++) {
        cin >> Arr[n]; Sum += Arr[n];
    }
    if (Sum < M) { cout << -1; return 0; }
    for (int n = 0; n < N; n++) {
        if (Sum - Arr[n] < M) { cout << n + 1; break; }
        Sum -= Arr[n];
    }
    return 0;
}