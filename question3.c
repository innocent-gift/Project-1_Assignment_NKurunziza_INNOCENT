#include <stdio.h>

// Function declarations (Prototypes)
void printWelcome();
int getPositiveNumber();
unsigned long long calculateFactorial(int n); // The recursive function

int main() {
    int number;
    unsigned long long result;

    // 1. Function Reuse: We reuse this simple function to print the header twice
    printWelcome();

    printf("This program calculates the factorial of a number.\n");
    
    // 2. Function Call: Get a valid positive number from the user
    number = getPositiveNumber();

    // 3. Recursive Function Call: Calculate the factorial
    result = calculateFactorial(number);

    // Print the final result
    printf("The factorial of %d is: %llu\n", number, result);

    // Reuse the welcome/header function as a footer goodbye message
    printWelcome();
    printf("Program finished successfully.\n");

    return 0;
}

// A simple function that we reuse at the start and end of the program
void printWelcome() {
    printf("=========================================\n");
}

// A function that asks for input and ensures it is a positive integer
int getPositiveNumber() {
    int num;
    printf("Enter a positive integer (0 to 20): ");
    scanf("%d", &num);
    
    // Quick validation to make sure the number isn't negative
    if (num < 0) {
        printf("Negative number entered. Setting number to 0.\n");
        return 0;
    }
    return num;
}

// The Recursive Function
// It calls itself repeatedly to calculate n * (n-1) * (n-2)...
unsigned long long calculateFactorial(int n) {
    // Base Case: stops the recursion when n is 0 or 1
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // Recursive Case: The function calls itself with a smaller number (n - 1)
    return n * calculateFactorial(n - 1);
}

