#include <stdio.h>

int calcsum(int *ptr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the number of elements n: ");
    scanf("%d", &n);

    int arr[1000];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    int totalSum = calcsum(arr, n);

    printf("Sum of all elements = %d\n", totalSum);

    return 0;
}
