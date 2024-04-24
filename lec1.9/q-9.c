#include<stdio.h>

main(){
	
	
	int i,j,n=1;
	char ch='A';
	
	
	
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			if(j%2==0){
				printf("%d ",n++);
			}
			else{
				printf("%c ",ch++);
			}
		}
		printf("\n");
	}
}
