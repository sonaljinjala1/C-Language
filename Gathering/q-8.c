

#include<stdio.h>

main(){
	int a,b;
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	
	printf("Press 1 for Addition..!\n");
	printf("Press 2 for Substraction..!\n");
	printf("Press 2 for Multiplication..!\n");
	printf("Press 3 for Division..!\n");
	printf("Press 4 for Modulas..!\n\n");
	
	cal(a,b);
}

int cal(int x, int y){
	int choice;
	
	printf("Enter your choice: ");
	scanf("%d\n",&choice);
	
	switch(choice){
		case 1:
			printf("The addition is ==> %d",x + y);
			break;
			
		case 2:
			printf("The substraction is ==> %d",x - y);
			break;
			
		case 3:
			printf("The multiplication is ==> %d",x * y);
			break;
			
		case 4:
			printf("The division is ==> %d",x / y);
			break;
			
		case 5:
			printf("THe modulas is ==> %d",x % y);
			break;
		
		default:
			printf("Please enter valid number...!");
	}
}
