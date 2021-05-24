#include <stdio.h>
#include <stdlib.h>

/*
Write a program that first takes a double as an input to determine his current health points (HP), followed by 1 or more pairs of int-double inputs where each pair represents a single volley of arrows. The int represents the total number of arrows in one volley and the double represents how much damage one arrow will be dealt to Benny’s HP (the two numbers are separated by a single whitespace). All of the input numbers will always be non-zero positive numbers. Print the total damage and Benny’s remaining HP after being dealt by all of the arrows (also include any excess damage represented in the negatives, e.g. -50.0 means 0 remaining HP and 50.0 excess damage). Additionally, print out whether he survived or not by the end of this.
*/

int main() {
	double hp;
	printf("Enter Benny’s HP here: ");
	scanf("%lf", &hp);

	int num_arrows;
	double damage, total_dmg = 0.0;
	printf("Enter volleys of arrows damage here: ");
	while (scanf("%d %lf", &num_arrows, &damage) == 2){
		total_dmg += num_arrows * damage;
	}
	
	double hp_left = hp - total_dmg;
	printf("Total damage: %.2f\n", total_dmg);
	printf("Benny’s remaining HP: %.2f\n", hp_left);
	if (hp_left > 0){
		printf("He survived! Huzzah!\n");
	}
	else {
		printf("He died! Press F to pay respects.\n");
	}

	return 0;
}