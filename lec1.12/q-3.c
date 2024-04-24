
// arry program=3 even numeber difine karke deta he

#include<stdio.h>

main(){
	
	int a;
	
	printf("Enter your value number: ");
	scanf("%d",&a);
	
	int arr[a],i,sum=0;
	
	for(i=0; i<a; i++){
		printf("arr[%d]= ",i);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<a; i++){
		printf("%d\n",arr[i]);
	}
	for(i=0; i<a; i++){
		if(arr[i]%2==0){
			printf("\n%d",arr[i]);
			
		}
	}
}
