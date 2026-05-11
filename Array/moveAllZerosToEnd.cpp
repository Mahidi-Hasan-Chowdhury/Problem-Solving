#include <iostream>
#include <vector>
#include <algorithm> // For swap

using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // Optimized 2nd Approach (One Pass)
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[count]);
                count++;
            }
        }
    }
};

int main() {
    Solution sol;
    
    // Test Case
    vector<int> arr = {3, 5, 0, 0, 4, 0, 1};
    
    cout << "Before: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    sol.pushZerosToEnd(arr);

    cout << "After:  ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}