#include<stdio.h>

main(){
	int i,j,s;
	
	for(i=1;i<=5;i++){
		for(s=1;s<=i;s++){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			if(j%2==0){
				printf("0 ");
			}
			else{
				printf("1 ");
			}
		}
		printf("\n");
	}
}
