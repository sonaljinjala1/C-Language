#include<stdio.h>

main(){
	
	char str[]= "Hello world";
	int length = strlen(str);
	
	printf("%s ",str);
	printf("\nlength of string is %d ",length);
	
	int i;
	printf("\n\nASCII value of :\n");
	for(i=0; i<length; i++){
		printf("\n%c = %d ",str[i],str[i]);
	}
	
}
