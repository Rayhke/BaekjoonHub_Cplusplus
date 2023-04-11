#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		printf("%d\n", n + 1);
	}
	return 0;
}