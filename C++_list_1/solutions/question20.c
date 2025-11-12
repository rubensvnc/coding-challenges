#include <stdio.h>
#include <stdbool.h>

int main(){

	float price;
	
	printf("Type in the full price: ");
	scanf("%f", &price);
	
	printf("10p discount on %.2f is: %.2f", price, price-(price*0.1));
	
	getchar();
	getchar();
	
	return 0;
}
