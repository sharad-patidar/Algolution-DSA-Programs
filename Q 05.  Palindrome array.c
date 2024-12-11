#include <stdio.h>
#define SIZE 5

int is_palindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int nums[SIZE];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    if (is_palindrome(nums, SIZE)) {
        printf("The numbers form a palindrome.\n");
    } else {
        printf("The numbers do not form a palindrome.\n");
    }

    return 0;
}
