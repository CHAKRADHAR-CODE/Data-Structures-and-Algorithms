#include <stdio.h>
void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printReverse(int arr[], int n) {
    printf("Array in reverse order:\n");
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortDescending(arr, n);
    printf("Array in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printReverse(arr, n);
    return 0;
}
