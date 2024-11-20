#include <stdio.h>

// Function for addition
float add(float num1, float num2) {
    return num1 + num2;
}

// Function for subtraction
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function for multiplication
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function for division
float divide(float num1, float num2) {
    return num2 != 0 ? num1 / num2 : 0; // Handle division by zero
}

int main() {
    float number1, number2, result = 0;
    char operator; // Operator to determine the operation

    // Read the two numbers and operator from input
    if (scanf("%f %f %c", &number1, &number2, &operator) != 3) {
        return 1; // Exit if inputs are invalid
    }

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = add(number1, number2);
            break;
        case '-':
            result = subtract(number1, number2);
            break;
        case '*':
            result = multiply(number1, number2);
            break;
        case '/':
            result = divide(number1, number2);
            break;
        default:
            printf("Invalid operator\n");
            return 1; // Exit if operator is invalid
    }

    // Output the result with six decimal places
    printf("%.6f\n", result);
    return 0;
}
