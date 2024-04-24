#include<stdio.h>
main(){
	
	int a, b, c , d ,e;
	
	printf("Enter number of a: ");
	scanf("%d", &a);
	printf("Enter number of b: ");
	scanf("%d", &b);
	printf("Enter number of c: ");
	scanf("%d", &c);
	printf("Enter number of d: ");
	scanf("%d", &d);
	printf("Enter number of e: ");
	scanf("%d", &e);
	
	
	if(a > b){
		if(a > c){
			if(a > d){
				if(a > e){
					printf("A is max");
				}
				else{
					printf("e is max");
				}
			}
		}
		
		else{
			if(d > e){
				printf("d is max");
			}
			else{
				printf("e  is max");
			}
		}
	}
	
	else{
		if(b > c){
			if(b > d){
				if(d > e){
					printf("d is max");
				}
				else{
					printf("e is max");
				}
			}
		}
		else{
			if(d > e){
				printf("d is max");
			}
			else{
				printf("e is max");
			}
			
		}
	}	
}

