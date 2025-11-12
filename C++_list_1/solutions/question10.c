#include <stdio.h>
#include <stdbool.h>

int main(){

	float c;
	
	printf("Type a value for the Celcius temperature: ");
	scanf("%f", &c);
	
	printf("The temperature %.2fC is: %.2fF\n", c, (c*9/5)+32);

	
	getchar();
	getchar();
	
	return 0;
}
