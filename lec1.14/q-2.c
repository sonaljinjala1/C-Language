#include<stdio.h>

main(){
	
	int row,col,i,j;
	
	printf("Enter number of row: ");
	scanf("%d",&row);
	printf("Enter number of col: ");
	scanf("%d" ,&col);
	
	int arr[row][col];
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0; i<row; i++){
			for(j=0; j<col; j++){
				printf("%d",arr[i][j]);
			}
		
		printf("\n");
	}
}
