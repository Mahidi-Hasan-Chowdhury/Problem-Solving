#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        
        // Fill the first half
        for(int i = 0; i < n; i++) {
            ans[i] = nums[i];
        } 
        
        // Fill the second half
        for(int i = n; i < 2 * n; i++) {
            ans[i] = nums[i - n];
        }
        
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 1};
    
    vector<int> result = sol.getConcatenation(nums);
    
    // Output: 1 2 1 1 2 1
    for(int x : result) cout << x << " ";
    
    return 0;
}