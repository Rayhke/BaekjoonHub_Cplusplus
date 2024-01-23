#include <iostream>
using namespace std;

int main() {
	long long Ur, Tr, Uo, To;
	cin >> Ur >> Tr >> Uo >> To;
	Ur *= 56; Tr *= 24; Uo *= 14; To *= 6;
	cout << Ur + Tr + Uo + To;
	return 0;
}