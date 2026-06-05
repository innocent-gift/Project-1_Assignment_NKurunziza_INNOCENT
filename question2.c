#include <stdio.h>

// Function declarations
void add(float num1, float num2);
void subtract(float num1, float num2);

int main() {
    float num1;
    float num2;
    char sign;

    // Setup the infinite loop to keep the program running
    while (1) {
        printf("\nThis calculator add or subtract\n");
        printf("Enter your first number:\n");
        scanf("%f", &num1);
        
        printf("Enter your second number:\n");
        scanf("%f", &num2);
        
        printf("Choose the symbol '+', '-', 's' to skip, or 'e' to exit:\n");
        // The space before %c is required to skip the extra newline character
        scanf(" %c", &sign); 

        // Using if-else statements to check the character symbol
        if (sign == '+') {
            add(num1, num2); // Call the add function
        } 
        else if (sign == '-') {
            subtract(num1, num2); // Call the subtract function
        } 
        else if (sign == 's' || sign == 'S') {
            printf("Skipping remaining code and restarting...\n");
            continue; // Jumps back to the top of the while loop
        } 
        else if (sign == 'e' || sign == 'E') {
            printf("Thank you for using the program. Goodbye!\n");
            break; // Breaks out of the while loop to end the program
        } 
        else {
            printf("Invalid symbol! Please try again.\n");
        }
    }

    return 0;
}

// Function to add the numbers
void add(float num1, float num2) {
    float result = num1 + num2;
    printf("Result: %.2f\n", result);
}

// Function to subtract the numbers
void subtract(float num1, float num2) {
    float result = num1 - num2;
    printf("Result: %.2f\n", result);
}

