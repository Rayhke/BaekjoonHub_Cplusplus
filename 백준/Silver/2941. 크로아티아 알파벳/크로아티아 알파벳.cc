#include <iostream>

int main() {
	int a = 0; char s[102];
	std::cin >> s;
	for (int n = 0; s[n] != '\0'; n++) {
		if ('a' <= s[n] && s[n] <= 'z') {
			if (s[n] == 'c') {
				if (s[n + 1] == '=' || s[n + 1] == '-') { a = a + 1; n = n + 1; }
				else { a = a + 1; }
			}
			else if (s[n] == 'd') {
				if (s[n + 1] == 'z' && s[n + 2] == '=') { a = a + 1; n = n + 2; }
				else if (s[n + 1] == '-') { a = a + 1; n = n + 1; }
				else { a = a + 1; }
			}
			else if (s[n] == 'l' || s[n] == 'n') {
				if (s[n + 1] == 'j') { a = a + 1; n = n + 1; }
				else { a = a + 1; }
			}
			else if (s[n] == 's' || s[n] == 'z') {
				if (s[n + 1] == '=') { a = a + 1; n = n + 1; }
				else { a = a + 1; }
			}
			else { a = a + 1; }
		}
	}
	std::cout << a;
	return 0;
}