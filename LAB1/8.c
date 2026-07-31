#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}
