#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int X, N, x[100], y[100];
	double Y, vs;
	cin >> X >> Y >> N;
	double min = (((double)1000 / Y) * X);
	for (int n = 0; n < N; n++) { cin >> x[n] >> y[n]; }
	for (int n = 0; n < N; n++) {
		vs = (((double)1000 / y[n]) * x[n]);
        min = (min < vs) ? min : vs;
	}
	cout << fixed;
	cout << setprecision(2) << min << endl;	
    return 0;
}