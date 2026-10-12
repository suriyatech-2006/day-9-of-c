#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number using a loop
    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    printf("Reverse of the number: %d\n", reverse);

    // Check if palindrome
    if (original == reverse) {
        printf("%d is a Palindrome Number.\n", original);
    } else {
        printf("%d is NOT a Palindrome Number.\n", original);
    }

    return 0;
}
