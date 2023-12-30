#include <iostream>
using namespace std;

int main() {
	int N; string S = "WelcomeToSMUPC"; cin >> N;
	if (N % 14 == 0) { N = 14; }
	else { N %= 14; }
	cout << S[N - 1];
	return 0;
}