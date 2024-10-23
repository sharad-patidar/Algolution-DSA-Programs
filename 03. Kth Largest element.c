#include<stdio.h>
#include <limits.h>

int findKthLargest(int arr[], int n, int k)
{
    int largest;
    for (int i = 0;i < k ;i++)
    {
        largest =  INT_MIN;
        for (int j = 0; j<n; j++)
        {
            if (arr[j]> largest) {
                largest = arr[j];
            }
        }    
        for (int j = 0; j < n; j++) {
            if (arr[j] == largest) {
                arr[j] = INT_MIN; // remove this element
                break;
            }
        }    
    }
    return largest;
}
int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int k;
    printf("enter value of k:");
    scanf("%d",&k);
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d largest element is:%d", k, findKthLargest(arr, n, k));
    return 0;
}
