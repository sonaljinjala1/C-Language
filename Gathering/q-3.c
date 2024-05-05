//Multiplication

#include<stdio.h>

main(){
	int A,B;
	printf("Enter the number of A: ");
	scanf("%d",&A);
	printf("Enter the number of B: ");
	scanf("%d",&B);
	
	int ans = multi(A,B);
	printf("\nMultiplication of %d and %d is ==> %d",A,B,ans);
	
	return 0;
	
}

void multi(int a, int b){
	int sum = a * b;
	return sum;
}
