#include <stdio.h>
#include <stdbool.h>

int main(){

	char vowels[] = "aeiou";
	int i = 0;
	char letter;
	bool c_trigger = false;
	
	printf("Type a letter: ");
	scanf("%c", &letter);
	
	
	for (i=0; i<=4; i++){
		if (letter == vowels[i]){
			printf("Letter '%c' is a vowel\n", letter);
			c_trigger = true;
		}
	}
	
	if (!c_trigger){
		printf("Letter '%c' is a consonant\n", letter);
	}
	
	getchar();
	getchar();
	
	return 0;
}
