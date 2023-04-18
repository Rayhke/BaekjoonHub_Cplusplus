#include <iostream>
using namespace std;

int main() {
	int n, m = 0;
	cin >> n;
	while (1) {
		if (m != 0) { cout << "int "; }
		else { cout << "int a;\n" << "int "; }
		for (int l = 0; l <= m; l++) { cout << "*"; }
		if (m != 0) { 
			cout << "ptr" << m + 1 << " = " << "&ptr";
			if (m != 1) { cout << m << ";\n"; }
			else { cout << ";\n"; }
		}
		else { cout << "ptr = &a;\n"; }
		m = m + 1;
		if (n == m) { break; }
	}
	return 0;
}