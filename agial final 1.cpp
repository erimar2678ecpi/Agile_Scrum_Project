#include <stdio.h>

// Function to compute the sum of two numbers
int calculation(int num1, int num2) {
    return num1 + num2;
}

int calculation2( int num1, int num2) {
	return num1 * num2;
}

int main() {
    int num1, num2, result;

    // Get user input
    printf("Please enter the first number for the calculation: ");
    scanf("%d", &num1);

    printf("\nPlease enter the second number for the calculation:\n");
    scanf("%d", &num2);

    // Call the function and store the result
    result = calculation(num1, num2);

    // Display the result
    printf("Calculation result is %d\n", result);

	printf(" Please enter number for the second calculation:");
	scanf("%d", &num1);
	
	printf("\nPlease enter the second number for the second calcualtion:\n");
	scanf("%d", &num2);
	
	result = calculation2(num1, num2);
	
	printf("Result for the second calculation is %d\n", result);
	
	




    return 0;
}
