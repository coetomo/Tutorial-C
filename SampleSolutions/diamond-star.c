#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, n;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	/* TOP HALF */
	for (i=0; i<n; i++){
		/* 
		i = 0, 1, 2, ... n-1
		num_stars = n - i
		num_spaces = 2 * i
		*/ 
		for (j=0; j<(n-i); j++){
			printf("*");
		}
		for (j=0; j<2*i; j++){
			printf(" ");
		}
		for (j=0; j<(n-i); j++){
			printf("*");
		}
		printf("\n");
	}

	/* BOTTOM HALF */
	for (i=(n-1); i>=0; i--){
		/* 
		i = n-1, n-2, ... 0
		num_stars = n - i
		num_spaces = 2 * i
		*/ 

		for (j=0; j<(n-i); j++){
			printf("*");
		}
		for (j=0; j<2*i; j++){
			printf(" ");
		}
		for (j=0; j<(n-i); j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}