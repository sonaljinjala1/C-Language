#include<stdio.h>

main(){
	
	int i,length,r;
	char name[20];
	
	printf("Enter any name you want: ");
	gets(name);
	
	for(length=0 ; name[length] != '\0' ; length++);
	
	for(i=0; i<length/2; i++){
		if(name[i] != name[length-i-1]){
			r=1;
			break;
		}
	}
	
	if(r==0){
		printf("It is Palindome.....................!");
	}
	else{
		printf("It is not Palindrome.........................!");
	}
}
	
	
	
	
	
	
