//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];

    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    getchar(); 
    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }

    
    char temp[400];
    strcpy(temp, str1);
    strcat(temp, str1);

    
    if (strstr(temp, str2) != NULL)
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}
