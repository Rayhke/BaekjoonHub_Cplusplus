#include <iostream>

int main() {
	int S, Ma, F, Mb; std::cin >> S >> Ma >> F >> Mb;
	std::cout << (S > Ma + F + Mb && S > 240 ? "flight" : "high speed rail");
	return 0;
}