//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, value, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];   

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = value;

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
