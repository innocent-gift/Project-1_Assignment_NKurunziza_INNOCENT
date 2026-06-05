#include <stdio.h>

int main() {
    printf("Number identifier odd/even\n");
    int num;
    
    // user inputs the number
    printf("Enter an integer: "); 
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf(" EVEN number\n");
    } else {
        printf("ODD number\n");
    }
    
    return 0;
}

