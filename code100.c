//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    int n = strlen(str);

    printf("All substrings of the string:\n");

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
