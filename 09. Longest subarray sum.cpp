#include <iostream>
#include <vector>
using namespace std;

vector<int> longest_subarray_with_sum(const vector<int>& nums, int target) {
    int max_len = 0;
    int start_index = -1;
    int n = nums.size();
    
    // Brute force: check all subarrays
    for (int i = 0; i < n; ++i) {
        int current_sum = 0;
        for (int j = i; j < n; ++j) {
            current_sum += nums[j];
            if (current_sum == target) {
                int length = j - i + 1;
                if (length > max_len) {
                    max_len = length;
                    start_index = i;
                }
            }
        }
    }

    // If we found a valid subarray, return it
    vector<int> result;
    if (max_len > 0) {
        for (int i = start_index; i < start_index + max_len; ++i) {
            result.push_back(nums[i]);
        }
    }
    return result;
}

int main() {
    vector<int> nums = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int target = 8;

    vector<int> result = longest_subarray_with_sum(nums, target);

    cout << "Longest subarray with sum " << target << " is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
