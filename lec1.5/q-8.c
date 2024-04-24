#include <stdio.h>

main() {
	
    int choice;

    
    printf("Welcome to Our Restaurant!\n");
    printf("1. Place Order\n");
    printf("2. Check Bill\n");
    printf("3. Exit\n");

   
    printf("Enter your choice: ");
    scanf("%d", &choice);

 
    switch (choice) {
        case 1:
            printf("You have chosen to place an order.\n");
            break;
        case 2:
            printf("You have chosen to check the bill.\n");
            break;
        case 3:
            printf("Thank you for visiting our restaurant. Have a nice day!\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
    }

  
}

