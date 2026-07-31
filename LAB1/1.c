#include <stdio.h>

void calculatestats(int arr[], int n, int *max, int *min, float *avg) {
    int sum = 0;
    *max = arr[0];
    *min = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
        sum += arr[i];
    }
    *avg = (float)sum / n;
}

int main() {
    int n, max, min;
    float avg;

    printf("Enter the number of elements n: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculatestats(arr, n, &max, &min, &avg);
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);
    printf("Average: %.2f\n", avg);

    return 0;
}
