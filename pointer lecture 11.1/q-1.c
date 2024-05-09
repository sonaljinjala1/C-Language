#include<stdio.h>

void main(){
	
	int a=5;
	int *ptr;
	
	ptr = &a;
	
	printf("A\t: %d\n",a);
	printf("PTR\t: %d\n\n",*ptr);
	
	printf("Address of A\t: %d\n",&a);
	printf("PTR Store Address\t: %u",ptr);
	
}
