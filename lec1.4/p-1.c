#include<stdio.h>
main(){
	
	int a, b, c;
	
	printf("Enter number of a:");
	scanf("%d", &a);
	printf("Enter number of b:");
	scanf("%d", &b);
	printf("Enter number of c:");
	scanf("%d", &c);
	
	if(a > b){
		if(a > c){
			printf("a is max");
		}
		else{
			printf("c is max");
		}
	}
	
	else{
		if(b > c){
			printf(" b is max");
		}
		else{
			printf("c is max");
		}
	}
	
	
}

