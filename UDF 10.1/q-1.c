#include<stdio.h>

int cube(int n)
{
	if(n<=1)
	{
		return 1;		
	}
	else
	{
		return n * n * n;
	}
}

void main(){
	int a;
	
	printf("Enter any number: ");
	scanf("%d",&a);

	printf("The cube of %d is ==> %d",a,cube(a));
	
}
