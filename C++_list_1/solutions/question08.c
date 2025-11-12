#include <stdio.h>


int main(){

	float base, height;
	
	printf("Type the triangle's base: ");
	scanf("%f", &base);
	
	printf("Type the triangle's height: ");
	scanf("%f", &height);
	
	printf("Its area is equal to: %.2f\n", (base*height)/2);
	
	system("pause");
	
}

