#include <stdio.h>

int main() {
	
	int posSum = 0, negSum = 0;
	int counterPos = 0, counterNeg = 0;
	int ave_pos = 0, ave_neg = 0; 
	int input;
	
	printf("Please enter an integer: ");
	
	while (scanf("%d", &input) == 1 && input != 0) {
		printf("Please enter an integer: ");
		if (input < 0) {
			negSum += input;
			counterNeg++;
		}
		else {
			posSum += input;
			counterPos++;
		}
	}
	
	if (posSum != 0) {
	ave_pos = (posSum/counterPos);
	printf("Positive average: %d\n", ave_pos);
	}
	
	if (negSum != 0) {
	ave_neg = (negSum/counterNeg);
	printf("Negative average: %d\n", ave_neg);
	}
	return 0;
	
}
	
	
	
