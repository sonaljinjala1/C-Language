#include <stdio.h>

main() {
    int number, first_digit, last_digit, sum;


    printf("Enter any number: ");
    scanf("%d", &number);

    
    first_digit = number;
    while (first_digit >= 10) {
        first_digit /= 10;
    }


    last_digit = number % 10;

    
    sum = first_digit + last_digit;


    printf("The sum of the first and the last digit: %d\n", sum);


}

