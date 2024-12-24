#include <iostream>
using namespace std;

bool F, B;

int main() {
	int Max = 0, Index = 0, Value; string S;
	for (int n = 0; n < 3; n++) {
		cin >> S;
		Value = atoi(S.c_str());
		if (Max < Value) {
			Max = Value; Index = n;
		}
	}
	Value = Max + 3 - Index;
	F = Value % 3 == 0;
	B = Value % 5 == 0;
	if (F || B) {
		cout << (F ? "Fizz" : "") << (B ? "Buzz" : "");
	}
	else { cout << Value; }
	return 0;
}