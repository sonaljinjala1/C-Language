#include<stdio.h>

int fact(int n){
	
	if(n <= 1){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
	
}

void main()
{
	int a;
	
	printf("Enter any number: ");
	scanf("%d",&a);
	printf("\nThe factorial of number ==> %d",fact(a));
}

