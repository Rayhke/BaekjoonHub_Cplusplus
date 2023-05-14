#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int s(int a, int b) {
	int p;
	string c = to_string(a); string d = to_string(b);
	reverse(c.begin(), c.end()); reverse(d.begin(), d.end());
	a = atoi(c.c_str()); b = atoi(d.c_str());
	p = a + b;
	string e = to_string(p);
	reverse(e.begin(), e.end());
	return atoi(e.c_str());
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << s(a, b);
	return 0;
}