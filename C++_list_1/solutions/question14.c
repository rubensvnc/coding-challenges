#include <stdio.h>
#include <stdbool.h>

int main(){

	float price, qtty;
	
	printf("Type the price: ");
	scanf("%f", &price);
	
	printf("Type the quantity: ");
	scanf("%f", &qtty);
	
	printf("Total: %.2f\n", price*qtty);
	
	getchar();
	getchar();
	
	return 0;
}
