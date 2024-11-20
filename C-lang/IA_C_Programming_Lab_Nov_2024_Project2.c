#include <stdio.h>

int main() {
    // Declare variables to store three numbers
    int num1, num2, num3;

    // Read three numbers from user input
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("%d", num1); // Output the largest number
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d", num2); // Output the largest number
    } else {
        printf("%d", num3); // Output the largest number
    }

    return 0; // Indicate successful program execution
}
