#include <iostream>
using namespace std;

int main() {
	int Y1, Y2, M1, M2, D1, D2, A, B;
	cin >> Y1 >> M1 >> D1;
	cin >> Y2 >> M2 >> D2;
	if (M2 > M1) { A = Y2 - Y1; }
	else if (M2 == M1 && D2 >= D1) { A = Y2 - Y1; }
	else { A = Y2 - Y1 - 1; }
	B = Y2 - Y1;
	std::cout << A << '\n' << B + 1 << '\n' << B;
	return 0;
}