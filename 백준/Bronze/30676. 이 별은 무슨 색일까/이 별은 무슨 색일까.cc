#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	if (N - 620 >= 0) { cout << "Red"; }
	else if (N - 590 >= 0) { cout << "Orange"; }
	else if (N - 570 >= 0) { cout << "Yellow"; }
	else if (N - 495 >= 0) { cout << "Green"; }
	else if (N - 450 >= 0) { cout << "Blue"; }
	else if (N - 425 >= 0) { cout << "Indigo"; }
	else { cout << "Violet"; }
	return 0;
}