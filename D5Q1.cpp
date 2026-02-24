#include <stdio.h>

int removeElement(int arr[], int n, int val) {
    int k = 0;  // position for next valid element

    for(int i = 0; i < n; i++) {
        if(arr[i] != val) {
            arr[k] = arr[i];
            k++;
        }
    }

    return k;  // number of elements not equal to val
}

int main() {
    int n, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d", &val);

    int k = removeElement(arr, n, val);

    printf("Number of elements after removal: %d\n", k);
    printf("Updated array: ");

    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}