#include<stdio.h>
main(){
	
	int a, b, c , d ,e ,f ,g;
	
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
	printf("Enter number of f: ");
	scanf("%d", &f);
	printf("Enter number of g: ");
	scanf("%d", &g);
	
	
	if(a > b){
		if(a > c){
			if(a > d){
				if(a > e){
					if(a > f){
						if(a > g){
							printf("A is max");
						}
						else{
							printf("g is max");
						}
					}
				}
			}
		}
		
		else{
			if(f > g){
				printf("f is max");
			}
			else{
				printf("g  is max");
			}
		}
	}
	
	else{
		if(b > c){
			if(b > d){
				if(d > e){
					if(f > g){
						printf("f is max");
					}
					else{
						printf("g is max");
					}
				}
			}
		}
		else{
			if(f > g){
				printf("f is max");
			}
			else{
				printf("g is max");
			}
			
		}
	}	
}

