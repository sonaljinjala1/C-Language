#include<stdio.h>

main(){
	
	int i,j,s;
	
	for(i=1; i<=5; i++){
		for(s=i; s<=4; s++){
			printf(" ");
		}
		for(j=i; j>=1; j--){
			printf("%d", j);
		}
		printf("\n");
	}
}

