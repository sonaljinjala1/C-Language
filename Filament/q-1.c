#include <stdio.h>


int main() {
    char str[100];
    int i, len, character = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-i-1]) {
            character = 0;
            break;
        }
    }

    if(character){
        printf("Given string is a Palindrome.\n");
    }
    else{
        printf("Given string is not a Palindrome.\n");

    return 0;
}
}

