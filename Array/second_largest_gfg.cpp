#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        
        for(int x : arr) {
            if(x > largest) {
                secondLargest = largest;
                largest = x;
            } 
            else if (x > secondLargest && x != largest) {
                secondLargest = x;
            }
        }
        
        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    cout << "Test 1 - Expected: 34, Result: " << sol.getSecondLargest(arr1) << endl;

    // Test Case 2 (Duplicates)
    vector<int> arr2 = {10, 5, 10};
    cout << "Test 2 - Expected: 5, Result: " << sol.getSecondLargest(arr2) << endl;

    // Test Case 3 (All same)
    vector<int> arr3 = {10, 10, 10};
    cout << "Test 3 - Expected: -1, Result: " << sol.getSecondLargest(arr3) << endl;

    return 0;
}