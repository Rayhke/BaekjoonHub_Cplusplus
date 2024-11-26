#include <iostream>
using namespace std;

int main() {
    int N, M, L, Arr[100000]; cin >> N >> M; L = N + 1;
    for (int n = N - 1; n > -1; n--) { cin >> Arr[n]; }
    for (int n = 0; n < N; n++) {
        if (M < 1) { L = N - n + 1; break; }
        M -= Arr[n];
    }
    cout << N - L;
    return 0;
}