
#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    // Extracting each digit
    digit1 = number / 1000;         //for finding first number from left
    digit2 = (number / 100) % 10;   //for finding second number
    digit3 = (number / 10) % 10;    // for finding third  number
    digit4 = number % 10;           // for finding fourth number


    sum = digit1 + digit2 + digit3 + digit4;   //// Calculating the sum of the digits

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

