#include<stdio.h>

void main()
{
	int size;
	
	printf("Enter array's size: ");
	size = arrSize();
	
	int myArray[size];
	
	arrElement(size,myArray);
}

int arrSize()
{	
	int n;
	scanf("%d",&n);
	
	return n;
}

int arrElement(int size, int arr[])
{	
	int i;
	
	for	(i=0; i<size; i++)
	{
		printf("Enter element %d: ",i+1);
		arr[i] = arrSize();
	}
	arrOutput(size,arr);
}

int arrOutput(int size, int arr[])
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

int arrSum(int size, int arr[])
{
	int i,sum=0;
	for(i=0; i<size; i++)
	{
		sum+=arr[i];
	}
	printf("\nThe sum of all elements ==> %d",sum);
}

