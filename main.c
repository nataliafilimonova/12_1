#include <stdio.h>
void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        int j = i + 1;
        while (j >= 0 && arr[j] < arr[i]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sortArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
