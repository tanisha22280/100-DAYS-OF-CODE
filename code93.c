//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0}; 

    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    getchar(); 
    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    
    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(int)str1[i]]++;
    }

    
    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(int)str2[i]]++;
    }

    
    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
