//arry program=2   total and averege total deta he

#include<stdio.h>

main(){
	
	int a,sum=0;
	
	printf("Enter your value number: ");
	scanf("%d", &a);
	
	int arr[a],i;
	
	for(i=0; i<a; i++){
		printf("arr[%d]=  ",i);
		scanf("\n%d",&arr[i]);
	}
		
	for(i=0; i<a; i++){
		printf("\n%d",arr[i]);
		sum=sum+arr[i];
	}
		
	printf("\n%d", sum);
		
		int avg = sum/a;
		printf("\n%d",avg);
	}

