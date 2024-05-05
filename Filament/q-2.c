#include <stdio.h>


int main() {
    char str[100];
    int i, len;
    int freq[26] = {0};

    printf("Enter any string: ");
    scanf("%s", str);

    len = strlen(str);

 
    for(i = 0; i < len; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A']++;
        }
    }

    printf("Frequency of each letter:\n");
    for(i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            printf("%c => %d\n", 'a' + i, freq[i]);
        }
    }

  
}

