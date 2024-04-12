#include <iostream>
using namespace std;

int main() {
	char in; int A, B, C;
	cin >> A >> in >> B >> in >> C;
	(A + B == C) ? cout << "YES" : cout << "NO";
	return 0;
}