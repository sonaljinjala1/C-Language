#include<stdio.h>

main(){
	int a,b;
	
	printf("Enter starting number: ");
	scanf("%d",&a);
	printf("Enter ending number: ");
	scanf("%d",&b);
	
	printf("\nThe All Numbers are ==>\n");
	loop(a,b);
	
}

int loop(int start, int end)
{
	if(start<=end)
	{
		printf("%d ",start++);
		loop(start,end);
	}
}
