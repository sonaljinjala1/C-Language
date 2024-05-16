/*
Write a Program to find the sum of diagonal elements from a given 2D array.
For example,
Input:
Enter the array's row & column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:
The sum of diagonal elements of an Array: 13
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
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	int sum=0;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(i==j){
				sum+=arr[i][j];
			}
		}
	}
	printf("\n\nThe sum of all diagonal elements is: %d",sum);
}
