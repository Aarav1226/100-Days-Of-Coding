//Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>
void pA(int a[], int n) {
    if (n == 0) {
        printf("Empty.\n");
        return;
    }
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int secondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array is too small to find second largest element.\n");
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("All elements are equal. No second largest element found.\n");
        return -1;
    }

    return secondLargest;
}
