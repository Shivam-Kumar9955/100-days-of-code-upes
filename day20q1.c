// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOddDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Special case for 0
    if (num == 0) {
        product = 1;
    } else {
        while (num != 0) {
            digit = num % 10;
            if (digit % 2 != 0) {  // Check if digit is odd
                product *= digit;
                hasOddDigit = 1;
            }
            num /= 10;
        }
    }

    // If no odd digit is found, product remains 1
    if (!hasOddDigit) {
        product = 1;
    }

    printf("Product of odd digits: %d\n", product);

    return 0;
}