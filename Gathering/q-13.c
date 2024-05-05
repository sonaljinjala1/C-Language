#include<stdio.h>
#include "q-11.c"

main()
{
	int a;
	
	printf("Enter the number: ");
	scanf("%d",&a);
	
	int ans;
	ans = squr(a);
	printf("\nThe cube is ==> %d",ans);	
}

//void squr(int num){
//	
//	int squr;
//	
//	squr = num * num;
//}
