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
	
	printf("\n\nThe elements are: \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	int row,col,sum=0;
	printf("\n\nEnter row number: ");
	scanf("%d",&row);
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			if(i==row) {
				printf("%d ",arr[row][j]);
				sum += arr[row][j];
			}
		}
	}
	
	printf("\nSum of %d row => %d",row,sum);
	
	
	
	printf("\n\nEnter column number: ");
	scanf("%d",&col);// 
	
	sum = 0;
	for(i=0; i<a; i++)
	{
		printf("%d ",arr[i][col]);
		sum += arr[i][col];
	}
	
	printf("\nSum of %d column => %d",col,sum);
}
