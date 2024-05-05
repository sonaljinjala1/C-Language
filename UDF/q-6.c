//Addition [TSRN]

#include<stdio.h>

main(){
	int a;
	
	a=add();
	printf("The sum is %d..",a);
	
	return 0;
}

int add(){
	int a,b;
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	
	return a + b;
}
