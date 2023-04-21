#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

int rev1(int a) {
	std::string s = std::to_string(a);
	reverse(s.begin(), s.end());
	return atoi(s.c_str());
}
int rev2(int b) {
	std::string s = std::to_string(b);
	reverse(s.begin(), s.end());
	return atoi(s.c_str());
}

int main() {
	int a, b;
	std::cin >> a >> b;
	if (rev1(a) > rev2(b)) { std::cout << rev1(a) << std::endl; }
	else { std::cout << rev2(b) << std::endl; }
	return 0;
}