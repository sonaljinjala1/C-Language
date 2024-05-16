/*
Q.2 Write a Program to count the total number of digits in a number.
For example,
Input:
Enter any number: 752

Output: 
Total number of digits: 3
*/

#include<stdio.h>

main(){
	int n,len=0;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	do{
		len++;
		n/=10;
	}while(n!=0);
	
	printf("The Total of digits is: %d\n",len);
}
