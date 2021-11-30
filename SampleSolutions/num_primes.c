#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Returns 1 if n is a prime, 0 otherwise */
int is_prime(int n){
	int i;
	//from i = 0 to sqrt(n) + 1 would also be acceptable
	for(i=1; i<n; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

/* Returns the number of primes that comes before n*/
int num_primes(int n){
	int i, num = 0;
	for (i=2; i<n; i++){
		//alternatively, if (isprime(i)) num += 1; would be acceptable
		num += is_prime(i);
	}
	return num;
}


int main() {
	/*Testing purposes */
	printf("num_primes(10): %d\n", num_primes(10));
	return 0;
}