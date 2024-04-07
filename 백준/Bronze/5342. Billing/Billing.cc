#include <iostream>
#include <map>
using namespace std;

int main() {
	map <string, double> M = {
		{"Paper",57.99},{"Printer",120.50},{"Planners",31.25},
		{"Binders", 22.50},{"Calendar",10.95},{"Notebooks",11.20},{"Ink",66.95} };
	double cost = 0; string S;
	cout << fixed; cout.precision(2);
	while (1) {
		cin >> S;
		if (S == "EOI") { break; }
		cost += M[S];
	}
	cout << '$' << cost;
	return 0;
}