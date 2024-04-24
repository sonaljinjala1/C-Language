#include <stdio.h>

main() {
    int limit;
    int number = 2; 
    int sum = 0;

   
    printf("Enter the limit: ");
    scanf("%d", &limit);

   
    while (number <= limit) {
        sum += number * number * number;
        number += 2;
    }

    printf("Sum of cubes of even numbers up to %d: %d\n", limit, sum);

  
}

