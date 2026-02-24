#include <stdio.h>

int main() {
    int n, i, key;
    
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    int comparisons = 0;
    int foundIndex = -1;

    for(i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if(foundIndex != -1)
        printf("Found at index %d\n", foundIndex);
    else
        printf("Not Found\n");

    printf("Comparisons = %d\n", comparisons);

    return 0;
}