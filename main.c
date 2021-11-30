
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	printf("Enter n: ");
	if (scanf("%d", &n) != 1 && n <= 0){
		printf("Invalid input format!");
		exit(EXIT_FAILURE);
	}
	for (i=1; i<=n; i++){
		if (i % 12 == 0){
			printf("DuckGoose\n");
		}
		else if (i % 4 == 0){
			printf("Duck\n");
		}
		else if (i % 6 == 0){
			printf("Goose\n");
		}
		else {
			printf("%d\n", i);
		}
		
		
	}
	return 0;
}
// alias edit="open ~/.bash_profile"