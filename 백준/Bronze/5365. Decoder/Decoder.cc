#include <iostream>
#include <vector>
using namespace std;

int N, Size; string Result = "";

int main() {
	cin >> N;
	vector<string> Vec(N);
	for (auto& vec : Vec) { cin >> vec; }
	Result += Vec[0][0]; Size = Vec[0].length();
	for (int n = 1; n < N; n++) {
		Result += (Size > Vec[n].length()) ? ' ' : Vec[n][Size - 1];
		Size = Vec[n].length();
	}
	cout << Result;
	return 0;
}