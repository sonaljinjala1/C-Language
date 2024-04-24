#include <stdio.h>

main() {
    int number;

    
    printf("Enter any number: ");
    scanf("%d", &number);

    const char* result = (number % 2 == 0) ? "Even" : "Odd";

    printf("%d is %s.\n", number, result);

   
}

