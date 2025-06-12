#include <stdio.h>

void findMinMax(int arr[], int n) {
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}

int main() {
    int arr[] = {12, 3, 45, 7, 22, 89, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n);
    return 0;
}
