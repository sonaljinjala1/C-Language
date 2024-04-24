#include<stdio.h>

main(){
	int a,b;
	
	printf("Enter the size of Rows: ");
	scanf("%d",&a);
	printf("Enter the size of Columns: ");
	scanf("%d",&b);
	
	int arr[a][b],i,j;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n\nThe Elements are: \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nThe transpose matrix of array: \n");
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}
