#include <stdio.h>
#include <stdbool.h>

int main(){

	int year;
	
	printf("Type the year: ");
	scanf("%d", &year);
	
	if (year % 100 == 0){
		if (year % 400 == 0){
			printf("Leap year\n");
		}
		else{
			printf("Not leap year\n");
		}
	} else {
		if (year % 4 == 0){
			printf("Leap year\n");
		}
		else {
			printf("Not leap year\n");
		}
	}
	
	
	getchar();
	getchar();
	
	return 0;
}
