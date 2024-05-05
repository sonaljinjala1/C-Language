#include<stdio.h>

void main()
{	
	int num;
	printf("Enter Any Number : ");
	scanf("%d",&num);
	
	digit(num);
}

int digit(int num)
{
	if(num%3==0 && num%5==0)
	{
		printf("\nThe given number %d is divisible by 3 & 5..\n",num);
	}
	else 
	{
		printf("\nThe given number %d is not divisible by 3 & 5..\n",num);
	}
}
