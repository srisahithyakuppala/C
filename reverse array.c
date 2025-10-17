#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reversing the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Append the last digit to reversed
        num /= 10; // Remove the last digit
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversed);

����return�0;
}
