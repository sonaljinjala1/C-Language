#include<stdio.h>

main(){
	
	int A , B;
	
	printf("Enter the number of A: ");
	scanf("%d",&A);
	printf("Enter the number of B: ");
	scanf("%d",&B);
	
	int ans = add(A,B);
	printf("\nThe sum of %d and %d is ==> %d",A,B,ans);
	
}

void add(int a, int b){
	int Sum = a + b;
	return Sum;
}
