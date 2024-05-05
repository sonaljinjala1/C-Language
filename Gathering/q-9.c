//Even or Odd  number

#include<stdio.h>

main(){
	
	int a;
	
	printf("Enter any number: ");
	scanf("%d",&a);
	
	evennum(a);
	
	
}

void evennum(int num){
	
	if(num%2==0){
		printf("\nThe number you have entered is Even..!");
	}
	else{
		printf("\nThe number you have entered is Odd..!");
	}
	
	
}
