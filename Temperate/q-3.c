/*
Q.3 Write a Program to find the sum of a first and the last digit of a number.
For example,
Input:
Enter any number: 384

Output: 
The sum of the first and the last digit: 7
*/
#include<stdio.h>

main(){	
	int n,first,last,sum;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	last=n%10;
	
	do{
		first=n%10;
		n=n/10;
	}while(n>0);
	
	
	

	printf("The sum of first digit %d and last digit %d is: %d", first, last, first+last);
}
