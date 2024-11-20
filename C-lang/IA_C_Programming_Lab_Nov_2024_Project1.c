#include <stdio.h>

int main() {
    int year; // Variable to store the input year

    scanf("%d", &year); // Read the year from user input

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year"); // Print "Leap Year" if the condition is met
    } else {
        printf("Non Leap Year"); // Print "Non Leap Year" otherwise
    }

    return 0; // Indicate successful execution
}
