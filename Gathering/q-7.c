//Addition [TSRS]

#include<Stdio.h>

main(){
	int a,b;
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	
	add(a,b);
}

int add(int x, int y){
	printf("%d",x + y);	
	return x + y;
}
