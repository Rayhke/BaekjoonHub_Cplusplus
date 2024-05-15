#include <iostream>
using namespace std;

int main() {
	bool R = 0; int A, B, C, Arr[3]; cin >> A >> B >> C;
	Arr[0] = A + B; Arr[1] = B + C; Arr[2] = A + C;
	if (Arr[0] == C || Arr[1] == A || Arr[2] == B) { R = 1; }
	cout << R;
	return 0;
}