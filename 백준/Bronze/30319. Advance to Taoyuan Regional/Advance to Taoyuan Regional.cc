#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int Arr[3], Index = -1;

int main() {
	bool R = 1; string S, P; cin >> S;
	istringstream iss(S);
	while (getline(iss, P, '-')) {
		Arr[++Index] = stoi(P);
	}
	if (Arr[1] > 9) { R = 0; }
	else if (Arr[1] == 9) {
		R = Arr[2] < 17;
	}
	cout << (R ? "GOOD" : "TOO LATE");
	return 0;
}