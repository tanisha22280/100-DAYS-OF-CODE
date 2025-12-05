//Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[200];
    int i, j;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

       
        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            str[j++] = str[i];  
        }
    }

    str[j] = '\0';  

    printf("String after removing vowels: %s\n", str);

    return 0;
}
