#include <stdio.h>
#include <stdlib.h>

int main() {
	int input, n = 0, sum = 0;
	printf("Enter integers here: ");
	while (scanf("%d", &input) == 1){
		sum += input;
		n++;
	}
	printf("Sum of itegers: %d\n", sum);
	printf("Average of integers: %.2f\n", 1.0*sum/n);
  	return 0;
}
