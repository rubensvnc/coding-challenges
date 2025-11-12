#include <stdio.h>
#include <stdbool.h>

int main(){

	int i = 0;
	
	for (i=1; i<=100; i++){
		if (i%3==0){
			printf("%d is a multiple of 3\n", i);
		}
	}
	
	getchar();
	getchar();
	
	return 0;
}
