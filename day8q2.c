// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main() {
double num1, num2, num3;

printf("Enter three numbers: ");
scanf("%lf %lf %lf", &num1, &num2, &num3);


if (num1 >= num2 && num1 >= num3) {
printf("The largest number is %.2lf\n", num1);
} 
else if (num2 >= num1 && num2 >= num3) {
printf("The largest number is %.2lf\n", num2);
} 
else {
printf("The largest number is %.2lf\n", num3);
}

return 0;
}
