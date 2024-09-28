#include <iostream>

int main() {
	long long N; std::string S; std::cin >> N;
	if (INT16_MIN <= N && N <= INT16_MAX) { S = "short"; }
	else if (INT32_MIN <= N && N <= INT32_MAX) { S = "int"; }
	else { S = "long long"; }
	std::cout << S;
	return 0;
}