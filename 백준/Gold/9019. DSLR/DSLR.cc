#include <iostream>
#include <queue>
using namespace std;

bool v[10000];
char f[] = { 'D','S','L','R' };
short A, B, T, W[4];

void V() {
    queue <pair<short, string>> q;
    q.push({ A,"" }); v[A] = 1;
    while (!q.empty()) {
        short n = q.front().first; string s = q.front().second; q.pop();
        if (n == B) { cout << s << '\n'; return; }
        W[0] = (n * 2) % 10000;
        W[1] = (n > 0) ? (n - 1) : 9999;
        W[2] = ((n % 1000) * 10) + (n / 1000);
        W[3] = ((n % 10) * 1000) + (n / 10);
        for (int m = 0; m < 4; m++) {
            int N = W[m];
            if (!v[N]) { v[N] = 1; q.push({ N,s + f[m] }); }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin >> T;
    for (int n = 0; n < T; n++) {
        cin >> A >> B; V();
        fill_n(v, 10000, 0);
    }
    return 0;
}
/* ■ 설명 ■
매 순간 마다 변수 선언 후 할당하는 것 보단
전역 변수로 계속 메모리 사용 유지 시키는 것이 더욱 효율적일 때도 있다.
*/
