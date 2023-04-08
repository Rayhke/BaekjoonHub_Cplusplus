#include <iostream>
using namespace std;

int Add(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }
int Rem(int a, int b) { return a % b; }

int main(int argc, char* argv[]) {
	int a, b;
	cin >> a >> b;
	cout << Add(a, b) << "\n" << Sub(a, b) << "\n" << Mul(a, b) << "\n" << Div(a, b) << "\n" << Rem(a, b);
	return 0;
}
