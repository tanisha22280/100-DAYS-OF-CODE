//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);  

    int start = 0, i = 0;
    while (1) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseWord(sentence, start, i - 1);
            start = i + 1;
        }
        if (sentence[i] == '\0') break;
        i++;
    }

    printf("Sentence with each word reversed:\n%s\n", sentence);

    return 0;
}
