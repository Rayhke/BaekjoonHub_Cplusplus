#include <iostream>
using namespace std;

int main() {
	int X, Y, XS = 0, YS = 0; cin >> X >> Y;
	while (X--) { XS *= 10; XS++; }
	while (Y--) { YS *= 10; YS++; }
	cout << XS + YS;
	return 0;
}