//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[200];
    int length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);   

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
