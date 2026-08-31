// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, temp, swappedNum = 0;
    int digitCount = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Special case for single-digit numbers
    if (num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // Find the last digit
    lastDigit = num % 10;

    // Find the first digit and count the digits
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        digitCount++;
    }
    firstDigit = temp;

    // Swap the first and last digits
    swappedNum = lastDigit;
    temp = num / 10;
    for (int i = 0; i < digitCount; i++) {
        swappedNum *= 10;
        if (i == digitCount - 1) {
            swappedNum += firstDigit;
        } else {
            swappedNum += temp % 10;
            temp /= 10;
        }
    }

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}