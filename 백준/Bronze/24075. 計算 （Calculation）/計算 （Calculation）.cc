#include <iostream>
using namespace std;

int main() {
	int A, B, Add, Sub; cin >> A >> B;
	Add = A + B; Sub = A - B;
	(Add > Sub) ? printf("%d\n%d", Add, Sub) : printf("%d\n%d", Sub, Add);
	return 0;
}