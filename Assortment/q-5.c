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

	int sum=0;
	float avg;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			sum+=arr[i][j];
		}
	}
	
	printf("\n\nThe sum of all elements is: %d",sum);
	avg= (float)sum/(a*b);  // / * (R To L)
	printf("\nAverage of an Array: %.2f",avg);
}
