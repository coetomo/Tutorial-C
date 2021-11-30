#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	printf("Enter a,b,c here: ");
	double a,b,c;
	if (scanf("%lf %lf %lf", &a,&b,&c) != 3){
		printf("Wrong input format!\n");
		exit(EXIT_FAILURE);	
	}
	double d = b*b - 4*a*c;
	if (a == 0 || d < 0){
		printf("No real roots!\n");
	}
	else {
		double root1, root2;
		root1 = (-b + sqrt(d))/(2*a);
		root2 = (-b - sqrt(d))/(2*a);
		if (d == 0){
			printf("One root! Root = %.2f\n", root1);
		}
		else {
			printf("Two roots! Root1 = %.2f, Root2 = %.2f\n", root1, root2);
		}
	}
  	return 0;
}