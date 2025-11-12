#include <stdio.h>


int main(){
	
	int n1;	
	
	printf("Type number: ");
	scanf("%d", &n1);
	
	if (n1 % 2 == 0){
		printf("The number %d is even\n", n1);
	} else {
		printf("The number %d is odd\n", n1);
	}
	
	system("pause");
}

