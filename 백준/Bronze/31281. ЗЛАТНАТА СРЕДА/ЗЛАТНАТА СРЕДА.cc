#include <iostream>
using namespace std;

int main() {
	long long Arr[3], Max = INT64_MIN, Min = INT64_MAX;
	for (int n = 0; n < 3; n++) {
		cin >> Arr[n];
		Max = max(Arr[n], Max); Min = min(Arr[n], Min);
	}
	for (int n = 0; n < 3; n++) {
		if (Arr[n] == Max || Arr[n] == Min) { continue; }
		cout << Arr[n]; break;
	}
	return 0;
}