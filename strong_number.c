#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of factorial of digits
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if strong number
    if (sum == original) {
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is NOT a Strong Number.\n", original);
    }

    return 0;
}
