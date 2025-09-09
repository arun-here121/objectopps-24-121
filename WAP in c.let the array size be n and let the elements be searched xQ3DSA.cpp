#include <stdio.h>

int main() {
    int n, i, x, found = 0;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];  // Array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &x);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Element %d found at position %d (index %d).\n", x, i + 1, i);
            found = 1;
            break;  // stop after finding the first match
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", x);
    }

    return 0;
}

