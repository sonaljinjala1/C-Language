#include<stdio.h>
main(){
	
	int a;
	printf("Enter your age : \n");
	scanf("%d", &a );
	
	if(a < 12){
		printf(" child ");
	}
	
	else if(a <= 19){
		printf("teenager");
	}
	
	else if(a <= 64){
		printf("adult");
	}
	
	else{
		printf(" senior ");
	}
}
