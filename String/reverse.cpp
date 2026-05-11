// Reverse a character array

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int start = 0;
//         int end = s.size()-1;
//         while(start<end)
//         {
//             swap(s[start],s[end]);
//             start++;
//             end--;
//         }
        
//     }
// };



// Reverse a string using STL
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    
    return 0;
}