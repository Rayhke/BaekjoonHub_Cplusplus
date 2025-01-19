#include <iostream>
using namespace std;

string Result[] = {"Watermelon", "Pomegranates", "Nuts", "Nothing"};

int main() {
	bool R = 0; int B, In, Index = 3; cin >> B;
	for (int n = 0; n < 3; n++) {
		cin >> In;
		if (B < In) { continue; }
		if (!R) { Index = n; R = 1; }
	}
	cout << Result[Index];
	return 0;
}