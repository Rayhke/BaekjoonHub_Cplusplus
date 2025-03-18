#include <iostream>
using namespace std;

int Paper[500][500];
bool Masking[500][500];

int main() {
    int H, W, Q, K, X, Y, C; cin >> H >> W >> Q;
    while (Q--) {
        cin >> K >> X >> Y; X--; Y--;
        if (K & 1) { cin >> C; }
        for (int n = X; n < X + 2; n++) {
            for (int m = Y; m < Y + 2; m++) {
                if (!(K & 1) || Masking[n][m]) { Masking[n][m] = 1; }
                else { Paper[n][m] = C; }
            }
        }
    }
    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            cout << Paper[h][w] << ' ';
        }
        cout << '\n';
    }
    return 0;
}