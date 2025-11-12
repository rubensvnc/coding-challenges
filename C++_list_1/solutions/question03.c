#include <stdio.h>


int main(){
	
	float score1, score2, score3;	
	
	printf("Type first test score: ");
	scanf("%f", &score1);
	
	printf("Type second test score: ");
	scanf("%f", &score2);
	
	printf("Type third test score: ");
	scanf("%f", &score3);
	
	printf("Average: %.2f\n", (score1+score2+score3)/3);
	
	system("pause");
}
