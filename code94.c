//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[200] = "";
    
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);  

    int maxLength = 0;
    int i = 0, start = 0;

    while (1) {
        
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            int length = i - start;
            if (length > maxLength) {
                maxLength = length;
                strncpy(longest, &sentence[start], length);
                longest[length] = '\0'; 
            }
            start = i + 1;  
        }

        if (sentence[i] == '\0') break;
        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
