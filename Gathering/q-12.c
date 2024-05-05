#include<stdio.h>

main(){
	
	int n,ans;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	ans = cube(n);
	printf("\nThe cube of %d is ==> %d",n,ans);
	
}

void cube(int num){
	
	int cubeans;
	
	cubeans = num * num * num;
}
