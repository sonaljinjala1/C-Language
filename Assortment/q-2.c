/*
Write a Program to find the largest element from a given 2D array.
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
The largest element is: 9
*/

#include<stdio.h>

main(){
	int a,b;
	
	printf("Enter the size of Rows: ");
	scanf("%d",&a);
	printf("ENter the size of Columns: ");
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
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(arr[0][0]<arr[i][j]){
				arr[0][0]=arr[i][j];
			}
		}
	}
	printf("The Largest Elements is :- %d",arr[0][0]);
}
