#include <stdio.h>


int main () {
	
	
	float num1, num2;
	
	printf("Digite o 1 numero: ");
	scanf("%f", &num1);
	
	printf("Digite o 2 numero: ");
	scanf("%f", &num2);
	
	if (num1 > num2){
		printf("Maior: %.2f\n", num1);
	} else {
		if (num1 < num2){
			printf("Maior: %.2f\n", num2);

		} else {
			printf("Numeros iguais\n");
		}
		
	}
	
	system("pause");
}
