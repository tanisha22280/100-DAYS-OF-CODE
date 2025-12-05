//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};  
    int digit;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;  
    }


    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    
    int maxDigit = 0, maxFreq = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring the most times: %d\n", maxDigit);
    printf("Occurrence count: %d\n", maxFreq);

    return 0;
}
