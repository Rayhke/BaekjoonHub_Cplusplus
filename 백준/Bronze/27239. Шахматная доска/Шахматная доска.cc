#include <iostream>
using namespace std;

int main() {
	int N; cin >> N; N--;
	cout << (char)(97 + (N % 8)) << (N / 8) + 1;
    return 0;
}