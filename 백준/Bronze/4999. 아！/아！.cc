#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char a[1000];
	char b[1000];
	cin >> a >> b;
	if (strlen(a) >= strlen(b)) cout << "go";
	else cout << "no";
	return 0;
}