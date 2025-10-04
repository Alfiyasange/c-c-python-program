#include <stdio.h>  // Including standard input-output library

int main() {
    int dividend, divisor, quotient, remainder;  // Declaring variables to store dividend, divisor, quotient, and remainder

    // Asking the user to input the dividend and divisor
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Calculating quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Printing the results
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d", remainder);

    return 0;  // Indicating that the program ended successfully
}