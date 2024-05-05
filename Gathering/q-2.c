#include<stdio.h>

main(){
	int A,B;
	
	printf("Enter the number of A: ");
	scanf("%d",&A);
	printf("Enter the number of B: ");
	scanf("%d",&B);
	
	int ans = sub(A,B);
	printf("\nThe substraction of %d and %d is ==> %d",A,B,ans);	
}

void sub(int a, int b){
	int sum = a - b;
	return sum;
}
