#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    bool Arr[26], Result; int T; string S; cin >> T;
    while (T--) {
        cin >> S; Result = 1;
        fill(Arr, Arr + 26, 0);
        for (char& C : S) { Arr[C - 97] = 1; }
        cin >> S;
        for (char& C : S) {
            if (!Arr[C - 97]) { Result = 0; break; }
        }
        cout << (Result ? "YES\n" : "NO\n");
    }
    return 0;
}