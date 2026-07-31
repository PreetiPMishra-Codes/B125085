#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i + 1; 
        }
    }
    return -1;
}

int main() {
    int n, target;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    int pos = linearSearch(arr, n, target);

    if (pos != -1) {
        printf("Element found at position: %d\n", pos);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
