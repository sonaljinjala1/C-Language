#include<stdio.h>

main(){
	
	int i,j,n=1;
	char ch='A';
	
	
	for(i=1 ; i<=5 ; i++){
		for(j=1 ; j<=5 ; j++){
			if(j%2==0){
				printf("%c ",ch++);
			}
			else{
				printf("%d ",n++);
			}
		}
		printf("\n");
	}
}
