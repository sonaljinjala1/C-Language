#include<stdio.h>

main(){
	int a,b;
	
	printf("Enter array A's size: ");
	scanf("%d",&a);
	
	int arr[a],i;
	
	for(i=0;i<a;i++){
		printf("a[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter array B's size: ");
	scanf("%d",&b);
	
	int arr1[b];
	
	for(i=0;i<b;i++){
		printf("b[%d]:  ",i);
		scanf("%d",&arr1[i]);
	}
	
	for(i=arr[i];i<arr1[i];i++){
		printf("%d ",arr[i]);
	}
	
	for(i=arr[i];i<arr1[i];i++){
		printf("%d ",arr1[i]);
	}
}
