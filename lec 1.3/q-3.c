#include<stdio.h>
main(){
	
	int a;
	printf("Enter your number : \n");
	scanf("%d", &a );
	
	if(a < 0){
		printf(" your number is nagative");
	}
	
	else if(a > 0){
		printf("your  number is positive");
	}
	
	else{
		printf(" your number is zero");
	}
}
