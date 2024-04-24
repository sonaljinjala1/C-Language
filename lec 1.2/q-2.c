#include<stdio.h>
main(){
	
	int salary,HRA,DA,TA,grows;
	
	printf("Enter Your salary:");
	scanf("%d" ,  &salary);
	
	HRA=(salary*10)/100;
	DA=(salary*5)/100;
	TA=(salary*8)/100;
	
	grows= salary+HRA+DA+TA;
	
	printf("your gross salary is %d",grows);
}
