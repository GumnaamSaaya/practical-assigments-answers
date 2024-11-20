#include <stdio.h>

int main() {
    // Declare a variable to store the character
    char character;

    // Read the character input from the user
    scanf("%c", &character);

    // Use switch-case to check if the character is a vowel
    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel"); // If the character is a vowel
            break;
        default:
            printf("Consonant"); // For all other alphabetic characters
            break;
    }

    return 0; // Indicate successful program execution
}
