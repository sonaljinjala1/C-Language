#include<stdio.h>
main(){
	
	int a;
	printf("Enter your Grade : \n");
	scanf("%d", &a );
	
	if(a <=32 ){
		printf(" fail ");
	}
	else if(a <= 40){
		printf(" c3 ");
	}
	else if(a < 50){
		printf(" c2 ");
	}
	else if(a <= 55){
		printf(" c1 ");
	}
	else if(a <= 70){
		printf(" b3 ");
	}
	else if(a <= 80){
		printf("b2");
	}
	else if(a <= 85){
		printf(" b1 ");
	}
	else if(a < 90){
		printf(" A2 ");
	}
	else if(a <= 99){
		printf(" A1 ");
	}
	else{
		printf(" Excelent");
	}
}
