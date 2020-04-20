// A number is called perfect, if the sum of all its proper divisors is the number itself. Write a program to test, whether a given number is perfect or not. The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors and 1 + 2 + 3 = 6.

#include <stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);

	int debug = 0;
	long long i, sum = 0;
	for(i = 2; i * i <= n; ++i) {
		if(debug)
			printf("%lld\n", i);
		if(n % i == 0) {
			if(i == (n / i)) sum += i;
			else sum += i + (n / i);
		}
	}
	++sum;
	if(debug)
		printf("%lld\n", sum);
	if(sum == n) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;
}
