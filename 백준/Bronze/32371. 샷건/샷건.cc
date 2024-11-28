#include <iostream>
using namespace std;
using Location = pair<int, int>;

Location Index[127], Key[] = {{9, 9}, {0, 0}};

int main() {
    char Keyboard[4][10]; int Count, X = 0, Y = 0; string S;
    for (int n = 0; n < 4; n++) {
        cin >> S;
        for (int m = 0; m < 10; m++) {
            Keyboard[n][m] = S[m];
            Index[S[m]] = {n, m};
        }
    }
    cin >> S;
    for (char& C : S) {
        Location P = Index[C];
        Key[0] = min(P, Key[0]);
        Key[1] = max(P, Key[1]);
    }
    for (auto& K : Key) {
        Y += K.first; X += K.second;
    }
    cout << Keyboard[Y / 2][X / 2];
    return 0;
}