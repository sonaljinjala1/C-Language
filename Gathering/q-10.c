

#include<stdio.h>

main(){
	
	int age;
	
	printf("Enter you Age : ");
	scanf("%d",&age);
	
	agenum(age);	
	
}

void agenum(int age){
	
	if(age>=18){
		printf("\nYou're eligible for vote...!");
	}
	else{
		printf("\nYou're not eligible for vote...!");
	}
}
