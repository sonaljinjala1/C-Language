#include<stdio.h>

void main()
{
	int size;
	
	printf("Enter array's size: ");
	size = inputInt();
	
	int myArray[size];
	
	arrayInput(size,myArray);
}

int inputInt()
{	
	int n;
	scanf("%d",&n);
	
	return n;
}

void arrayInput(int size, int arr[])
{	
	int i;
	
	for	(i=0; i<size; i++)
	{
		printf("Enter element %d: ",i+1);
		arr[i] = inputInt();
	}
	arrayOutput(size,arr);
}

void arrayOutput(int size, int arr[])
{
	int i;
	
	printf("\nAll Elements are :-\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	arrSum(size,arr);
}

void arrSum(int size, int arr[])
{
	int i,sum=0;
	for(i=0; i<size; i++)
	{
		sum+=arr[i];
	}
	printf("\nThe sum of all elements ==> %d",sum);
}

