#include<stdio.h>

main(){
	int a,b;
	
	printf("Enter the size of Rows: ");
	scanf("%d",&a);
	printf("Enter the size of Columns: ");
	scanf("%d",&b);
	
	int arr[a][b],arr1[a][b],i,j;
	printf("\n\nEnter array A's elements: \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("A[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n\nEnter array B's elements: \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("B[%d][%d]: ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	int sum=0;
	
	printf("\n\n The addition operation of two 2D arrays are: \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			sum=arr[i][j]+arr1[i][j];
			printf("%d ",sum);
		}
		printf("\n");
	}
	
	
}
