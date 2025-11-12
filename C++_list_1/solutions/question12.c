#include <stdio.h>
#include <stdbool.h>

int main(){

	int i, num = 0;
	
	printf("Type a number: ");
	scanf("%d", &num);
	
	for (i=num-1; i>=1; i--){
		num *= i;
	}
	
	printf("It's Factorial is: %d\n", num);
	
	getchar();
	getchar();
	
	return 0;
}
