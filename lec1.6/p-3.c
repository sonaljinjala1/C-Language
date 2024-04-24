#include<stdio.h>

main(){
	
	int n , m;
	printf("Enter value for starting program :");
	scanf("%d" , &n);
	printf("Enter value for ending program: ");
	scanf("%d" , &m );
	while(n <= m){// 1to 10 n=1
		printf("%d", n);
		n++;
		printf("\n");
	}
}
