//arry program =1

#include<stdio.h>

main(){
	
	int a;
	
	printf("enter your value number: ");
	scanf("%d",&a);
	
	int arr[a],i;
	
	for(i=0; i<a; i++){
		printf("arr[%d ]= ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<a; i++){
		printf("%d ",arr[i]);
	}
	
}
