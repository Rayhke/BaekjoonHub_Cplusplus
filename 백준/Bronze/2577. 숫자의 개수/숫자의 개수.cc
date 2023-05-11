#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, d[10] = {};
	string e;
	cin >> a >> b >> c;
	e = to_string(a * b * c);
	for (int n = 0; e[n] != '\0'; n++) { a = e[n]; d[a - 48] += 1; }
	for (int n = 0; n < 10; n++) { cout << d[n] << endl; }
	return 0;
}