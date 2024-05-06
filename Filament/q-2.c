#include<stdio.h>

main(){
	
 	int i,j,length,counted;
 	char str[150];
	
 	printf("enter any string : ");
 	gets(str);
	
 	length=strlen(str);
	
 	printf("Frequency of each letter:\n");
	
 	for(i=0;i<length;i++){
  		counted=1;
  		if(str[i]){
   			for(j=i+1;j<length;j++){
   				if(str[i]==str[j]) {
    				counted++;
    				str[j]='\0';
   				}
  			}
  			printf("%c=>%d\n",str[i],counted);
 		}  
 	}

}
