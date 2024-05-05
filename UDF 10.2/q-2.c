#include <stdio.h>

void main() {
    char word[25];
	
	printf("Enter a string: ");
	gets(word);

	printf("%s\n",word);
    printf("\nLength of '%s' is: %d\n",word,strLength(word));
    
}


int strLength(char word[]) {
    int length = 0;
    
    while (word[length] != '\0') {
        length++;
    }
    return length;
}



