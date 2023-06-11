#include <iostream>
#include <cstdlib>
using namespace std;

int com(const void* a, const void* b) {		// 아직 제대로 이 기능에 대해
    int elt1 = *static_cast<const int*>(a);	// 파악하지 못했으므로 완벽한 게 아니다.
    int elt2 = *static_cast<const int*>(b);
    if (elt1 < elt2) { return -1; }
    else if (elt1 > elt2) { return 1; }
    else { return 0; }
}

int s(int a, int b[], int e) {
    int mn = 0, md, mx = a - 1;
    while (mn <= mx) {
        md = (mn + mx) / 2;
        if (b[md] == e) { return 1; }
        else if (b[md] < e) { mn = md + 1; }
        else { mx = md - 1; }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, c, e; cin >> a;
    int* b = new int[a];
    for (int n = 0; n < a; n++) { cin >> b[n]; }
    qsort(b, a, sizeof(int), com);
    cin >> c; int* d = new int[c];
    for (int n = 0; n < c; n++) {
        cin >> e;
        d[n] = s(a, b, e);
    }
    for (int n = 0; n < c; n++) { cout << d[n] << " "; }
    delete[]b, d;
    return 0;
}
