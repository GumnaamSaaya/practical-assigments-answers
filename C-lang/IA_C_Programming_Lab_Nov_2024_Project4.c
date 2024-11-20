#include <stdio.h>

// Function to calculate the factorial of a number using recursion
long long factorial(int number) {
    if (number == 0 || number == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return number * factorial(number - 1); // Recursive case
}

int main() {
    // Variable to store the input number
    int number;

    // Read the input number from the user
    scanf("%d", &number);

    // Check if the input is valid (non-negative)
    if (number < 0) {
        printf("Invalid input! Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        printf("%lld\n", factorial(number));
    }

    return 0; // Indicate successful program execution
}
