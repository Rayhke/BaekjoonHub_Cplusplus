#include <iostream>
using namespace std;

int main() {
    int N, Team[100], Now, Min, Index;
    while (1) {
        cin >> N;
        if (N == 0) { break; }
        Min = 1e9; Index = 0;
        for (int n = 0; n < N; n++) { cin >> Team[n]; }
        for (int n = 0; n < N; n++) {
            Now = abs(2023 - Team[n]);
            if (Min > Now) { Min = Now; Index = n; }
        }
        cout << ++Index << '\n';
    }
    return 0;
}