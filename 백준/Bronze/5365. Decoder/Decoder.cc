#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, Size = 0; string Result = ""; cin >> N;
	vector<string> Vec(N);
	for (auto& vec : Vec) { cin >> vec; }
	for (auto& vec : Vec) {
		Result += Size > vec.length() ? ' ' : vec[max(--Size, 0)];
		Size = vec.length();
	}
	cout << Result;
	return 0;
}