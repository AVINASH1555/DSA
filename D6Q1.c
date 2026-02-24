#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if(n == 0)
        return 0;

    int j = 0;  // index of last unique element

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;  // number of unique elements
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k = removeDuplicates(arr, n);

    printf("Unique elements: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}