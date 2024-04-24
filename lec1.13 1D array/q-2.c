#include<stdio.h>

main(){
	int a,b;
	
	printf("Enter the number of starting year: ");
	scanf("%d",&a);
	printf("Enter the number of ending year: ");
	scanf("%d",&b);
	
	int arr[a],i;
	
	arr[a]=a;
	
	for(i=arr[a];i<=b;i++){
		if(arr[a]%4==0){
			printf("%d\n",arr[a]);
		}
		arr[a]++;
	}
}
