#include <stdio.h>

void permute(int arr[], int start, int end) {
    if (start == end) {
        // base case: all elements have been permuted, so print the array
        for (int i = 0; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        // recursive case: permute each element in the remaining array
        for (int i = start; i <= end; i++) {
            // swap arr[start] with arr[i]
            int temp = arr[start];
            arr[start] = arr[i];
            arr[i] = temp;

            // permute the remaining array
            permute(arr, start + 1, end);

            // swap arr[start] back with arr[i]
            temp = arr[start];
            arr[start] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    permute(arr, 0, n - 1);
    return 0;
}
