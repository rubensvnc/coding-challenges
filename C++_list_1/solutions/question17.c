#include <stdio.h>
#include <stdbool.h>

int main(){

	int num1, num2, num3;
	
	printf("Type the first number: ");
	scanf("%d", &num1);
	
	printf("Type the second number: ");
	scanf("%d", &num2);
	
	printf("Type the third number: ");
	scanf("%d", &num3);
	
	if (num1 > num2 && num1 > num3){
		printf("%d is the biggest\n", num1);
	} else {
		if (num2 > num1 && num2 > num3){
			printf("%d is the biggest\n", num2);
		}
		else {
			printf("%d is the biggest\n", num3);
		}
	}
	
	getchar();
	getchar();
	
	return 0;
}
