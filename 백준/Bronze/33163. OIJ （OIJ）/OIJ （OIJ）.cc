#include <iostream>
using namespace std;

int main() {
	int N, Arr[26]; char S[101]; cin >> N >> S;
	Arr[9] = 14; Arr[14] = 8; Arr[8] = 9;
	for (int n = 0; n < N; n++) {
		printf("%c", Arr[S[n] - 65] + 65);
	}
	return 0;
}