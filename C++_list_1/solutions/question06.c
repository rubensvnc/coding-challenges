#include <stdio.h>


int main(){
	
	int n1;	
	
	printf("Type your age: ");
	scanf("%d", &n1);
	
	if (n1 >= 18){
		printf("You are of age\n");
	} else {
		printf("You are not of age\n");
	} 


	system("pause");
}

