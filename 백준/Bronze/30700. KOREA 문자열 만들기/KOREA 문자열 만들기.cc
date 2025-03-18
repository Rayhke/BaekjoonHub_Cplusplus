#include <iostream>
using namespace std;

string K = "KOREA";

int main() {
    int Index = 0, Count = 0; string S; cin >> S;
    for (char& C : S) {
        if (C == K[Index]) {
            Count++; Index++; Index %= 5;
        }
    }
    cout << Count;
    return 0;
}