// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    long long num, complement = 0, base = 1, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    // Find the 1's complement
    while (num != 0) {
        digit = num % 10;
        if (digit == 0) {
            complement += 1 * base;
        }
        num /= 10;
        base *= 10;
    }

    printf("1's complement: %lld\n", complement);

    return 0;
}