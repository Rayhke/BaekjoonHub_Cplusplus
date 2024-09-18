#include <iostream>
using namespace std;

int main() {
	bool Mack, Zack; int N, In, Arr[10]; cin >> N;
	while (N--) {
		Mack = 0; Zack = 0;
		for (int n = 0; n < 10; n++) {
			cin >> In; Arr[n] = In;
			if (In == 17) { Zack = 1; }
			if (In == 18) { Mack = 1; }
		}
		for (int& n : Arr) { cout << n << ' '; }
		cout << '\n';
		if (Mack && Zack) { cout << "both"; }
		else if (Mack || Zack) { cout << ((Mack) ? "mack" : "zack"); }
		else { cout << "none"; }
		cout << "\n\n";
	}
	return 0;
}