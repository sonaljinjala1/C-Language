/*
Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Output:
Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10

Enter column number: 2
Elements of column 2: 1, 4, 6
The sum of column 2: 11
*/

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
