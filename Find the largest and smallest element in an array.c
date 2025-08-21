#include <stdio.h>
int main() {
    int arr[50], n, i, max, min;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);
    return 0;
}
