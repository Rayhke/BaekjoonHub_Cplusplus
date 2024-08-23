#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int Arr[3], Index = 0; string S; cin >> S;
	istringstream iss(S);
	while (getline(iss, S, '/')) {
		Arr[Index++] = stoi(S);
	}
	if (Arr[1] == 0 || Arr[0] + Arr[2] < Arr[1]) { S = "hasu"; }
	else { S = "gosu"; }
	cout << S;
	return 0;
}