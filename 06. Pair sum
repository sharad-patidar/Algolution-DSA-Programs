#include <stdio.h>

void findPair(int arr[], int n, int X) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum=arr[i] + arr[j];
            if (sum == X) {
                printf("Pair Found: (%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    return;
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 11};
    int X = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    findPair(arr, n, X);
    return 0;
}
