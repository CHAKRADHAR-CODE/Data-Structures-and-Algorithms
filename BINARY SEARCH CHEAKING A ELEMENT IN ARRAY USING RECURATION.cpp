#include<stdio.h>
int binary_search(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
            return 1;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    while (q--) {
        int x;
        scanf("%d", &x);
        if (binary_search(arr, n, x))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
