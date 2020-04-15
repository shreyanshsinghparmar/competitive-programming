// Given a positive integer (<= 1000000), find the minimum number of bits required to represent it as a binary number.

#include <stdio.h>
#include <math.h>

int main() {
	long n;
	scanf("%ld", &n);
	long bits = 0;
	while(n) {
		++bits;
		n >>= 1;
	}
	printf("%ld\n", bits);
	return 0;
}
