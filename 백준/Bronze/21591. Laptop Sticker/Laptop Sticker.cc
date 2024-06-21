#include <iostream>
using namespace std;

int main() {
	int wc, hc, ws, hs; cin >> wc >> hc >> ws >> hs;
	wc -= ws; hc -= hs;
	cout << (wc > 1 && hc > 1) ? 1 : 0;
	return 0;
}