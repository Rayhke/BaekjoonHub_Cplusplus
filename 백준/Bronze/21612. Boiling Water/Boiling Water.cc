#include <iostream>
using namespace std;

int main() {
	int B, Value; cin >> B;
	Value = (B * 5) - 400;
	cout << Value << '\n';
	if (Value != 100) {
		(Value > 100) ? cout << -1 : cout << 1;
	}
	else { cout << 0; }
	return 0;
}