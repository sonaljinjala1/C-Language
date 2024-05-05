//Division 

#include<stdio.h>

main(){
	int A,B;
	
	printf("Enter the number of A: ");
	scanf("%d",&A);
	printf("Enter the number of B: ");
	scanf("%d",&B);
	
	int ans = div(A,B);
	printf("\nThe Division of %d and %d is ==> %d",A,B,ans);
}

void div(int a, int b){
	int sum = a / b;
	return sum;
}
