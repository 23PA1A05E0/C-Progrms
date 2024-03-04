#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Initialize max to the first number
    int max = num1;

    // Use a while loop to update max if a greater number is found
    while (num2 > 0) {
        if (num2 > max) {
            max = num2;
        }

        // Input the next number
       // printf("Enter another number (or enter 0 to finish): ");
       // scanf("%d", &num2);
       num2--;
    }

    // Print the greatest number
    printf("The greatest number is: %d\n", max);

    return 0;
}