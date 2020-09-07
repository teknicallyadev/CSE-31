#include <stdio.h>

int main(){
	
	int numLines, numTypo;
	
	//Number of lines for punishment
	printf("Enter the number of lines for the punishment: ");
	scanf("%d", &numLines);
	
	//Error for invalid number
	if (numLines < 0) {
		printf("You entered an incorrect value for the number of lines!\n");
		return 0;
	}
	
	//Line for typo
	printf("Enter the line for which we want to make a typo: ");
	scanf("%d", &numTypo);
	
	//Error for invalid number
	if (numTypo < 0) {
		printf("You entered an incorrect value for line typo!\n");
		return 0;
	}
	
	//Loop for lines printed from numLines and which line gets typoed
	for (int i = 0; i < numLines; i++){
		if (numTypo == i+1){
			printf("C programming language is the bet!");
		}
		else
			printf("C programming language is the best!");
	}
	
	printf("\n");
	return 0;	
}
