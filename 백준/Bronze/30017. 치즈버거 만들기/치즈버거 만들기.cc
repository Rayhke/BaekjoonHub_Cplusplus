#include <iostream>
using namespace std;

int main() {
    int A, B; cin >> A >> B;
    cout << min(--A, B) * 2 + 1;
    return 0;
}