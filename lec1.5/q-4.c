#include <stdio.h>

main() {
	
    int dayNumber;

 
    printf("Enter a number (1 to 7): ");
    scanf("%d", &dayNumber);

  
    switch (dayNumber) {
        case 1:
            printf("Day of the week: Monday\n");
            break;
        case 2:
            printf("Day of the week: Tuesday\n");
            break;
        case 3:
            printf("Day of the week: Wednesday\n");
            break;
        case 4:
            printf("Day of the week: Thursday\n");
            break;
        case 5:
            printf("Day of the week: Friday\n");
            break;
        case 6:
            printf("Day of the week: Saturday\n");
            break;
        case 7:
            printf("Day of the week: Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }


}

