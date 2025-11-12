#include <stdio.h>
#include <stdbool.h>

int main(){

	int num;
	
	printf("Type a number: ");
	scanf("%d", &num);
	
	if (num % 5 == 0){
		printf("It's divisible by 5\n");
	} else {
		printf("It's not divisible by 5\n");
	}
	
	getchar();
	getchar();
	
	return 0;
}
