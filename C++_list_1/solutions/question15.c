#include <stdio.h>
#include <stdbool.h>

int main(){

	char *month[] = {"January", "February", "March", "April", "May", "June", "July", 
		"August", "September", "October", "November", "December"};
	int i, num;
	
	printf("Type a month's number: ");
	scanf("%d", &num);
	
	printf("The month's name is: %s\n", month[num-1]);
	
	getchar();
	getchar();
	
	return 0;
}
