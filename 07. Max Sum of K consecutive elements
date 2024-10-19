#include <stdio.h>
int maxSum(int arr[], int n, int k) {
    if (n < k) {
        printf("Invalid Input\n");
        return -1;
    }
    
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }
    return max_sum;
}

int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = maxSum(arr, n, k);
    if (result != -1) {
        printf("Maximum Sum: %d\n", result);
    }
    return 0;
}
