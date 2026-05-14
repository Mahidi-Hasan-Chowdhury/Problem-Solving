#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Brute Force Solution: O(n^2) time complexity
    // Space Complexity: O(1) - constant space
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            // Check every element after index 'i' to see if it matches nums[i]
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true; // Found a duplicate
                }
            }
        }
        return false; // No duplicates found after checking all pairs
    }
};

int main() {
    Solution sol;

    // Test Case 1: Has Duplicate
    vector<int> nums1 = {1, 2, 3, 3};
    cout << "Test Case 1 (1, 2, 3, 3): " << (sol.hasDuplicate(nums1) ? "True" : "False") << endl;

    // Test Case 2: No Duplicate
    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Test Case 2 (1, 2, 3, 4): " << (sol.hasDuplicate(nums2) ? "True" : "False") << endl;

    return 0;
}