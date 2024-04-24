#include<stdio.h>

main(){
	int a;
	
	printf("Enter the array: ");
	scanf("%d",&a);
	
	int arr[a],i,square;
	
	for(i=0;i<a;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n");
	printf("The all elements are:\n");
		
		
	for(i=0;i<a;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\n\n");
	printf("The squares are :- \n");
	for(i=0;i<a;i++){
		square=arr[i]*arr[i];
		printf("%d ",square);
	}
}
