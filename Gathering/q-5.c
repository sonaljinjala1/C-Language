// Modulas 

#include<stdio.h>

main(){
	int A,B;
	
	printf("Enter the number of A: ");
	scanf("%d",&A);
	printf("Enter the number of B: ");
	scanf("%d",&B);
	
	int ans = mod(A,B);
	printf("The Modulas of %d and %d is ==> %d",A,B,ans);
}

void mod(int a, int b){
	int sum = a % b;
	return sum;
}
