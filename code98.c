//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    printf("Enter full name: ");
    scanf("%[^\n]", name);  

    int len = strlen(name);
    int lastSpace = -1;

    
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Formatted name: ");

    
    for (int i = 0; i <= lastSpace; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c. ", toupper(name[i]));
        }
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ') {
            printf("%c. ", toupper(name[i+1]));
        }
    }

   
    if (lastSpace != -1 && lastSpace + 1 < len) {
        for (int i = lastSpace + 1; i < len; i++) {
            printf("%c", name[i]);
        }
    }

    printf("\n");

    return 0;
}
