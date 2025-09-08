#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    // Input size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and value to insert
    printf("Enter the position (1 to %d) to insert: ", n+1);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new value
    arr[pos - 1] = value;
    n++;

    // Print updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

